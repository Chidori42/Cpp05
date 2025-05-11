/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:27:48 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/16 23:32:07 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include <fstream>
#include <string>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
    private:
      std::string target;
      void CreateFileForm() const;
    public:
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm const &other);

        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);
        void execute(Bureaucrat const & executor) const;

        std::string getTarget() const;

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