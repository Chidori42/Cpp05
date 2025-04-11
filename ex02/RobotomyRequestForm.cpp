/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:15:21 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/11 16:17:49 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): name("Default"){
    
}
RobotomyRequestForm::RobotomyRequestForm(std::string name){
    this->name = name;
}
RobotomyRequestForm::~RobotomyRequestForm(){
    
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other){
    this->name = other.name;
    this->target = other.target;
    this->isSigned = other.isSigned;
    this->gradeToSign = other.gradeToSign;
    this->gradeToExecute = other.gradeToExecute;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other){
    if (this != &other){
        this->name = other.name;
        this->target = other.target;
        this->isSigned = other.isSigned;
        this->gradeToSign = other.gradeToSign;
        this->gradeToExecute = other.gradeToExecute;
    }
    return *this;
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    if (executor.getGrade() > this->gradeToExecute){
        throw GradeTooLowException();
    }
    if (this->isSigned == false){
        throw FormNotSignedException();
    }
    std::cout << "Beeeeeep boop beep! " << this->target
    << " has been robotomized successfully 50% of the time." << std::endl;
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
void RobotomyRequestForm::setTarget(std::string target){
    this->target = target;
}
std::string RobotomyRequestForm::getTarget() const{
    return this->target;
}
bool RobotomyRequestForm::getIsSigned() const{
    return this->isSigned;
}
int RobotomyRequestForm::getGradeToSign() const{
    return this->gradeToSign;
}
int RobotomyRequestForm::getGradeToExecute() const{
    return this->gradeToExecute;
}
void RobotomyRequestForm::setIsSigned(bool isSigned){
    this->isSigned = isSigned;
}
void RobotomyRequestForm::setGradeToSign(int gradeToSign){
    this->gradeToSign = gradeToSign;
}
void RobotomyRequestForm::setGradeToExecute(int gradeToExecute){
    this->gradeToExecute = gradeToExecute;
}
void RobotomyRequestForm::setName(std::string name){
    this->name = name;
}
std::string RobotomyRequestForm::getName() const{
    return this->name;
}
std::string RobotomyRequestForm::getFormName() const{
    return this->name;
}
std::ofstream RobotomyRequestForm::CreateFileForm(){
    std::ofstream file;
    file.open(this->name + "_shrubbery");
    if (file.is_open()){
        file << "ASCII art of a shrubbery" << std::endl;
    }
    return file;
}