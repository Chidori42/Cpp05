/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 10:54:35 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/02/19 11:20:21 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("Default"){
    std::cout << "Bureaucrat Constructor Called" << std::endl;
}
Bureaucrat::Bureaucrat(std::string name) : name(name){
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

std::string Bureaucrat::getName(){
    return (this->name);
}
int Bureaucrat::getGrade(){
    return (this->grad);
}
void Bureaucrat::setGrade(int grad){
    this->grad = grad;
}

void Bureaucrat::GradeTooHighException(){
    if (grad < 1)
        std::cout << "The Grade Is To High" << std::endl;
}
void Bureaucrat::GradeTooLowException(){
     if (grad > 150)
        std::cout << "The Grade Is To low" << std::endl;
}