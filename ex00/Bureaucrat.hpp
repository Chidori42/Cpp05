/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 10:48:44 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/09 16:23:01 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat{
    private:
      const std::string name;
      int grad;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grad);
        ~Bureaucrat();
        Bureaucrat(Bureaucrat const &other);

        Bureaucrat &operator=(Bureaucrat const &other);
        
        std::string getName() const;
        int getGrade() const;
        
        void IncrementGrade();
        void DecrementGrade();
        
        class GradeTooHighException: public std::exception{
          public:
          const char* what() const throw();
        };
        
        class GradeTooLowException: public std::exception{
          public:
            const char* what() const throw();
          };
        };
std::ostream &operator<<(std::ostream &os, Bureaucrat const &other);

#endif