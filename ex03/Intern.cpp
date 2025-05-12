/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 00:01:41 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/05/12 12:32:18 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern(){

}
Intern::~Intern(){
    
}
Intern::Intern(Intern const &other){
    *this = other;
}
Intern &Intern::operator=(Intern const &other){
    (void)other;
    return *this;
}   


AForm* Intern::makeForm(std::string formName, std::string formTarget) {
    if (formName.empty()) {
        std::cout << "Form name is empty." << std::endl;
        return NULL;
    }

    std::string Names[3] = {"presidentialpardon request", "robotomy request", "shrubberycreation request"};
    AForm* (*functions[3])(std::string) = {
        &PresidentialPardonForm::create,
        &RobotomyRequestForm::create,
        &ShrubberyCreationForm::create
    };
    AForm* form = NULL;
    for (int i = 0; i < 3; i++) {
        if (formName == Names[i]){
            form = functions[i](formTarget);
            break;
        }
    }
    if (!form) {
        throw FormNotFoundException();
    }
    std::cout << "Intern creates " << form->getName() << std::endl;
    return form;
}

const char *Intern::FormNotFoundException::what() const throw(){
    return "The Form Was Not Found";
}
