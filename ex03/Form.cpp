/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:46:23 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/16 23:47:53 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("wati9a"), wassigned(false), gradsign(2), gradexecute(2){
    if (getGradsign() > 150)
        throw GradeTooLowException();
    else if (getGradsign() < 1)
        throw GradeTooHighException();
}
Form::~Form(){

}
Form::Form(std::string name): name(name), wassigned(false), gradsign(2), gradexecute(2){
    if (getGradsign() > 150)
        throw GradeTooLowException();
    else if (getGradsign() < 1)
        throw GradeTooHighException();
}

std::string Form::getname() const{
    return (this->name);
}
bool Form::getWassigned() const{
    return (this->wassigned);
}
int Form::getGradsign() const{
    return (this->gradsign);
}
int Form::getGradexecute() const{
    return (this->gradexecute);
}

void Form::beSigned(const Bureaucrat &br){
    if (br.getGrade() <= getGradsign())
        this->wassigned = true;
    else
        throw GradeTooLowException();
}
void Form::execute(Bureaucrat const &executor) const{
    if (executor.getGrade() > getGradexecute())
        throw GradeTooLowException();
    std::cout << "Form executed" << std::endl;
}

const char *Form::GradeTooHighException::what() const throw(){
    return "The Form Grade Is To High";
}
const char *Form::GradeTooLowException::what() const throw(){
    return "The Form Grade Is To Low";
}
std::ostream &operator<<(std::ostream &os, Form const &other){
    os << "Form: " << other.getname() << ", Grade to sign: " << other.getGradsign()
       << ", Grade to execute: " << other.getGradexecute() << ", Is signed: " 
       << (other.getWassigned() ? "Yes" : "No");
    return os;
}