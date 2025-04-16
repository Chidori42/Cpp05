/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:13:56 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/16 23:47:53 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): target(target){
    
}
PresidentialPardonForm::~PresidentialPardonForm(){
    
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) : Form(other){
    *this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other) {
    if (this == &other)
        return *this; 
    return *this;
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if (Form::getWassigned() == false)
        throw FormNotSignedException();
    if (executor.getGrade() > 25 || this->getGradexecute() > 5)
        throw GradeTooLowException();
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::string PresidentialPardonForm::getTarget() const{
    return (this->target);
}

const char *PresidentialPardonForm::GradeTooHighException::what() const throw(){
    return "The PresidentialPardonForm Grade Is To High";
}
const char *PresidentialPardonForm::GradeTooLowException::what() const throw(){
    return "The PresidentialPardonForm Grade Is To Low";
}
const char *PresidentialPardonForm::FormNotSignedException::what() const throw(){
    return "The PresidentialPardonForm Is Not Signed";
}