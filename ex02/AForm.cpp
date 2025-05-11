/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:46:23 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/11 22:31:47 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): name("wati9a"), wassigned(false), gradsign(1), gradexecute(1){
    if (getGradsign() > 150)
        throw GradeTooLowException();
    else if (getGradsign() < 1)
        throw GradeTooHighException();
}
AForm::~AForm(){

}
AForm::AForm(std::string name, int gradsign, int gradexecute): name(name), wassigned(false), gradsign(gradsign), gradexecute(gradexecute){
    if (getGradsign() > 150)
        throw GradeTooLowException();
    else if (getGradsign() < 1)
        throw GradeTooHighException();
}

std::string AForm::getname() const{
    return (this->name);
}
bool AForm::getWassigned() const{
    return (this->wassigned);
}
int AForm::getGradsign() const{
    return (this->gradsign);
}
int AForm::getGradexecute() const{
    return (this->gradexecute);
}

void AForm::beSigned(const Bureaucrat &br){
    if (br.getGrade() <= getGradsign())
        this->wassigned = true;
    else
        throw GradeTooLowException();
}
void AForm::execute(Bureaucrat const &executor) const{
    if (executor.getGrade() > getGradexecute())
        throw GradeTooLowException();
    std::cout << "Form executed" << std::endl;
}

const char *AForm::GradeTooHighException::what() const throw(){
    return "The AForm Grade Is To High";
}
const char *AForm::GradeTooLowException::what() const throw(){
    return "The AForm Grade Is To Low";
}
std::ostream &operator<<(std::ostream &os, AForm const &other){
    os << "AForm: " << other.getname() << ", Grade to sign: " << other.getGradsign()
       << ", Grade to execute: " << other.getGradexecute() << ", Is signed: " 
       << (other.getWassigned() ? "Yes" : "No");
    return os;
}