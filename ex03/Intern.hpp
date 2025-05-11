/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 22:05:13 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/17 16:34:26 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <exception>

class Intern
{
    public:
        Intern();
        Intern(Intern const &other);
        ~Intern();
        Intern &operator=(Intern const &other);
        AForm *makeForm(std::string formName, std::string target);
        class FormNotFoundException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

#endif