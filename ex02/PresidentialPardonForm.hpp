/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:29:26 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/11 16:13:54 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"

class PresidentialPardonForm{
    public:
        std::string name;
    private:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string name);
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const &other);

        PresidentialPardonForm &operator=(PresidentialPardonForm const &other);
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