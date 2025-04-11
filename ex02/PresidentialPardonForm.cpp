/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:13:56 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/11 16:17:34 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): name("Default"){
    
}
PresidentialPardonForm::PresidentialPardonForm(std::string name){
    this->name = name;
}
PresidentialPardonForm::~PresidentialPardonForm(){
    
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other){
    this->name = other.name;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other){
    if (this != &other){
        this->name = other.name;
    }
    return *this;
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if (executor.getGrade() > 25){
        throw GradeTooLowException();
    }
    std::cout << this->name << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

const char *PresidentialPardonForm::GradeTooHighException::what() const throw(){
    return "The PresidentialPardonForm Grade Is To High";
}
const char *PresidentialPardonForm::GradeTooLowException::what() const throw(){
    return "The PresidentialPardonForm Grade Is To Low";
}