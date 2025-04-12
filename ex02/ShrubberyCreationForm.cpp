/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:26:24 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/12 21:19:49 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){
}
ShrubberyCreationForm::~ShrubberyCreationForm(){
    
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : AForm(other){
    *this = other;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other){
    if (this == &other)
        return *this; 
    return *this;
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    if (executor.getGrade() > AForm::getGradexecute()){
        throw GradeTooLowException();
    }
    if (AForm::getWassigned() == false){
        throw FormNotSignedException();
    }
    CreateFileForm();
    std::cout << "ShrubberyCreationForm: " << AForm::getname()
        << " has been executed by " << executor.getName() << std::endl;

}
void ShrubberyCreationForm::CreateFileForm() const{
    std::ofstream file;
    file.open(AForm::getname() + "_shrubbery");
    if (file.is_open()){
        file << "       _-_\n";
        file << "    _-_-_-_\n";
        file << "  _-_-_-_-_-_\n";
        file << " _-_-_-_-_-_-_\n";
        file << "       |||\n";
        file << "       |||\n";
        file << "       |||\n";
        file.close();
    } else {
        std::cerr << "Error: Unable to open file." << std::endl;
    }
}

const char *ShrubberyCreationForm::GradeTooHighException::what() const throw(){
    return "The ShrubberyCreationForm Grade Is To High";
}
const char *ShrubberyCreationForm::GradeTooLowException::what() const throw(){
    return "The ShrubberyCreationForm Grade Is To Low";
}
const char *ShrubberyCreationForm::FormNotSignedException::what() const throw(){
    return "The ShrubberyCreationForm Is Not Signed";
}