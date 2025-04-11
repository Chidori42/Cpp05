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

RobotomyRequestForm::RobotomyRequestForm(){
    
}
RobotomyRequestForm::RobotomyRequestForm(std::string name){
    
}
RobotomyRequestForm::~RobotomyRequestForm(){
    
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other){

}
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other){
    
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    
}

const char *RobotomyRequestForm::GradeTooHighException::what() const throw(){
    return "The RobotomyRequestForm Grade Is To High";
}
const char *RobotomyRequestForm::GradeTooLowException::what() const throw(){
    return "The RobotomyRequestForm Grade Is To Low";
}