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

ShrubberyCreationForm::ShrubberyCreationForm() : name("Default"){
    
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string name){
    this->name = name;
}
ShrubberyCreationForm::~ShrubberyCreationForm(){
    
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other){
    this->name = other.name;
    this->target = other.target;
    this->isSigned = other.isSigned;
    this->gradeToSign = other.gradeToSign;
    this->gradeToExecute = other.gradeToExecute;
    this->CreateFileForm();
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other){
    if (this != &other){
        this->name = other.name;
        this->target = other.target;
        this->isSigned = other.isSigned;
        this->gradeToSign = other.gradeToSign;
        this->gradeToExecute = other.gradeToExecute;
    }
    return *this;
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    if (executor.getGrade() > this->gradeToExecute){
        throw GradeTooLowException();
    }
    if (this->isSigned == false){
        throw FormNotSignedException();
    }
    CreateFileForm();
    std::cout << "ShrubberyCreationForm: " << this->target
    << " has been created successfully." << std::endl;

}
std::ofstream ShrubberyCreationForm::CreateFileForm(){
    std::ofstream file;
    file.open(this->target + "_shrubbery");
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
    return file;
}

const char *ShrubberyCreationForm::GradeTooHighException::what() const throw(){
    return "The ShrubberyCreationForm Grade Is To High";
}
const char *ShrubberyCreationForm::GradeTooLowException::what() const throw(){
    return "The ShrubberyCreationForm Grade Is To Low";
}