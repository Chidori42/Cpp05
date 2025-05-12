/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:15:21 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/05/12 12:46:53 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm(target, 45, 72){
    
}
RobotomyRequestForm::~RobotomyRequestForm(){
    
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : AForm(other){
    *this = other;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other){
    if (this == &other)
        return *this; 
    return *this;
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    if (this->getWassigned() == false){
        throw FormNotSignedException();
    }
    if (executor.getGrade() > 150)
        throw GradeTooLowException();
    else if (executor.getGrade() < 1)
        throw GradeTooHighException();
    float randNum = time(0) % 2;
    if (randNum == 0){
        std::cout << "Beeeeeep boop beep! " << this->getName()
            << " is being robotomized..." << std::endl;
    }
    else{
        std::cout << "The robotomy failed" << std::endl;
    }
}

AForm* RobotomyRequestForm::create(std::string target){
    return new RobotomyRequestForm(target);
}

const char *RobotomyRequestForm::FormNotSignedException::what() const throw(){
    return "The RobotomyRequestForm Is Not Signed";
}