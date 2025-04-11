/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:27:48 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/11 16:16:52 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"

class ShrubberyCreationForm{
    private:
        std::string name;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string name);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm const &other);

        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);
        void execute(Bureaucrat const & executor) const;
        std::ofstream CreateFileForm();

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