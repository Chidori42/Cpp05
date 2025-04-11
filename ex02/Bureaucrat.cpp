/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 10:54:35 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/11 16:13:37 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("Default"), grad(2){
    if (getGrade() > 150)
        throw GradeTooLowException();
    else if (getGrade() < 1)
        throw GradeTooHighException();
    std::cout << "Bureaucrat Constructor Called" << std::endl;
}
Bureaucrat::Bureaucrat(std::string name) : name(name), grad(2){
    if (getGrade() > 150)
        throw GradeTooLowException();
    else if (getGrade() < 1)
        throw GradeTooHighException();
    std::cout << "Bureaucrat Parametrize Constructor Called" << std::endl;
}
Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat Destructor Called" << std::endl;
}
Bureaucrat::Bureaucrat(Bureaucrat const &other){
    this->grad = other.grad;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other){
    if (this != &other)
    {
        this->grad = other.grad;
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &other){

    os << other.getName() << ". bureaucrat grade " << other.getGrade() << "." << std::endl;
    return os;
}
std::string Bureaucrat::getName() const{
    return (this->name);
}
int Bureaucrat::getGrade() const{
    return (this->grad);
}
void Bureaucrat::setGrade(int grad){
    this->grad = grad;
}

void Bureaucrat::IncrementGrade(){
    if (this->grad + 1 > 150)
        throw GradeTooLowException();
    this->grad++;
}
void Bureaucrat::DecrementGrade(){
    if (this->grad - 1 < 1)
        throw GradeTooHighException();
    this->grad--;
}

void Bureaucrat::signForm(Form f){
    f.beSigned(*this);
    if (f.getWassigned()){
        std::cout << this->getName() << " signed " << f.getname() << std::endl;
    }
    else
    {
        std::cout << this->getName() << " couldn't sign "
            << f.getname() << " because it has an invalid grad" << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form){

}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
    return "The Grade Is To High";
}
const char *Bureaucrat::GradeTooLowException::what() const throw(){
    return "The Grade Is To Low";
}