/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:15:21 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/18 17:00:16 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string target): target(target){
    
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
    if (this->getGradsign() > 72 || this->getGradexecute() > 45){
        throw GradeTooLowException();
    }
    if (this->getWassigned() == false){
        throw FormNotSignedException();
    }
    if (executor.getGrade() > this->getGradexecute()){
        throw GradeTooLowException();
    }
    float randNum = time(0) % 2;
    if (randNum == 0){
        std::cout << "Beeeeeep boop beep! " << this->getTarget()
            << " is being robotomized..." << std::endl;
    }
    else{
        std::cout << "The robotomy failed" << std::endl;
    }
}

std::string RobotomyRequestForm::getTarget() const{
    return (this->target);
}

AForm* RobotomyRequestForm::create(std::string target){
    return new RobotomyRequestForm(target);
}


const char *RobotomyRequestForm::GradeTooHighException::what() const throw(){
    return "The RobotomyRequestForm Grade Is To High";
}
const char *RobotomyRequestForm::GradeTooLowException::what() const throw(){
    return "The RobotomyRequestForm Grade Is To Low";
}
const char *RobotomyRequestForm::FormNotSignedException::what() const throw(){
    return "The RobotomyRequestForm Is Not Signed";
}