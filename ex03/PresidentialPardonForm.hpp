/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:29:26 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/16 23:47:53 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include <fstream>
#include "Form.hpp"

class PresidentialPardonForm : public Form{
  private:
      std::string target;
    public:
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const &other);

        PresidentialPardonForm &operator=(PresidentialPardonForm const &other);
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