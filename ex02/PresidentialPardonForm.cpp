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

PresidentialPardonForm::PresidentialPardonForm(){
    
}
PresidentialPardonForm::PresidentialPardonForm(std::string name){
    
}
PresidentialPardonForm::~PresidentialPardonForm(){
    
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other){

}
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other){
    
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    
}

const char *PresidentialPardonForm::GradeTooHighException::what() const throw(){
    return "The PresidentialPardonForm Grade Is To High";
}
const char *PresidentialPardonForm::GradeTooLowException::what() const throw(){
    return "The PresidentialPardonForm Grade Is To Low";
}