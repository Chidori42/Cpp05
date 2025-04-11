/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:28:45 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/11 16:17:00 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"

class RobotomyRequestForm{
    public:
        std::string name;
    private:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string name);
        ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const &other);

        RobotomyRequestForm &operator=(RobotomyRequestForm const &other);
        void execute(Bureaucrat const & executor) const;

        class GradeTooHighException: public std::exception{
          public:
            const char* what() const throw();
        };
        
        class GradeTooLowException: public std::exception{
          public:
            const char* what() const throw();
        };
};

#endif