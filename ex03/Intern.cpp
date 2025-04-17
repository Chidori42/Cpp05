/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 00:01:41 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/17 16:36:05 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern(){

}
Intern::~Intern(){
    
}
Intern::Intern(Intern const &other){
    
}
Intern &Intern::operator=(Intern const &other){
    
}

Form* Intern::makeForm(std::string formName, std::string formTarget) {
    std::string Names[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    
    Form* (*functionTable[3])(std::string) = {
        &PresidentialPardonForm::create,
        &RobotomyRequestForm::create,
        &ShrubberyCreationForm::create
    };
    

    for (int i = 0; i < 3; i++) {
        if (Names[i] == formName) {
            std::cout << "Intern creates " << formName << std::endl;
            return functionTable[i](formTarget);

        }
    }
    
    std::cout << "Form with name " << formName << " not found." << std::endl;
    return NULL;
}