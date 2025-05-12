/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:28:45 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/05/12 12:46:06 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include <fstream>
#include <cstdlib>
#include <string>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm{
    public:
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const &other);

        RobotomyRequestForm &operator=(RobotomyRequestForm const &other);
        void execute(Bureaucrat const & executor) const;
        static  AForm* create(std::string target);
        
        class FormNotSignedException: public std::exception{
            public:
                const char* what() const throw();
        };
};

#endif