/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:15:21 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/12 21:13:35 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(){
    
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
    if (executor.getGrade() > AForm::getGradexecute()){
        throw GradeTooLowException();
    }
    if (AForm::getWassigned() == false){
        throw FormNotSignedException();
    }
    if (executor.getGrade() == 45 && AForm::getGradsign() == 72){
        std::cout << "Beeeeeep boop beep! " << AForm::getname()
            << " is being robotomized..." << std::endl;
    }
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
void RobotomyRequestForm::CreateFileForm(){
    std::ofstream file(AForm::getname() + "_shrubbery");
    if (file.is_open()) {
        file << "ASCII art of a shrubbery" << std::endl;
        file.close();
    }
}
