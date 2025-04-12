/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:27:48 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/12 21:17:53 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
    public:
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm const &other);

        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);
        void execute(Bureaucrat const & executor) const;
        void CreateFileForm() const;

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