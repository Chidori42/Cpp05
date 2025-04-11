/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:26:24 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/11 16:18:11 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){
    
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string name){
    
}
ShrubberyCreationForm::~ShrubberyCreationForm(){
    
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other){

}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other){
    
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    
}

const char *ShrubberyCreationForm::GradeTooHighException::what() const throw(){
    return "The ShrubberyCreationForm Grade Is To High";
}
const char *ShrubberyCreationForm::GradeTooLowException::what() const throw(){
    return "The ShrubberyCreationForm Grade Is To Low";
}