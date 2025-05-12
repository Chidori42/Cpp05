/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:13:56 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/05/12 12:49:09 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm(target, 5, 25){
    
}

PresidentialPardonForm::~PresidentialPardonForm(){
    
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) : AForm(other){
    *this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other) {
    if (this == &other)
        return *this; 
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if (getWassigned() == false)
        throw FormNotSignedException();
    
    if (executor.getGrade() > 150)
        throw GradeTooLowException();
    else if (executor.getGrade() < 1)
        throw GradeTooHighException();
    std::cout << getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

const char *PresidentialPardonForm::FormNotSignedException::what() const throw(){
    return "The PresidentialPardonForm Is Not Signed";
}