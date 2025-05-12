/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:46:23 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/05/12 10:49:30 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("wati9a"), wassigned(false), gradsign(1), gradexecute(1){
    if (getGradsign() > 150)
        throw GradeTooLowException();
    else if (getGradsign() < 1)
        throw GradeTooHighException();
}
Form::~Form(){

}
Form::Form(std::string name, int gradsign, int gradexecute): name(name), wassigned(false), gradsign(gradsign), gradexecute(gradexecute){
    if (getGradsign() > 150)
        throw GradeTooLowException();
    else if (getGradsign() < 1)
        throw GradeTooHighException();
}
        
std::ostream &operator<<(std::ostream &os, Form const &other){
    os << other.getname() << ", Gradsign is "
        << other.getGradsign() << ", Gradeexecute is "
        << other.getGradexecute() << std::endl;
    return os;
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

void Form::beSigned(Bureaucrat br){
    if (br.getGrade() <= getGradsign())
        this->wassigned = true;
    else
        throw GradeTooHighException();
}

const char *Form::GradeTooHighException::what() const throw(){
    return "The Form Grade Is To High";
}
const char *Form::GradeTooLowException::what() const throw(){
    return "The Form Grade Is To Low";
}