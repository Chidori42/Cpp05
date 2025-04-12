/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:28:45 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/12 21:13:43 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include <fstream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm{
    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const &other);

        RobotomyRequestForm &operator=(RobotomyRequestForm const &other);
        void execute(Bureaucrat const & executor) const;
        void CreateFileForm();
  

        class GradeTooHighException: public std::exception{
          public:
            const char* what() const throw();
        };
        
        class GradeTooLowException: public std::exception{
          public:
            const char* what() const throw();
        };
        class FormNotSignedException: public std::exception{
            public:
                const char* what() const throw();
        };
};

#endif