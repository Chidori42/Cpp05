/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:41:09 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/10 16:43:59 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;
class AForm{
    private:
        const std::string name;
        bool wassigned;
        const int gradsign;
        const int gradexecute;
    public:
        AForm();
        ~AForm();
        AForm(std::string name, int gradsign, int gradexecute);
        
        std::string getname() const;
        bool getWassigned() const;
        int getGradsign() const;
        int getGradexecute() const;
        void beSigned(const Bureaucrat &br);
        virtual void execute(Bureaucrat const &executor) const = 0;
    
        class GradeTooHighException: public std::exception{
            public:
            const char* what() const throw();
        };
          
        class GradeTooLowException: public std::exception{
        public:
            const char* what() const throw();
        };
};
std::ostream &operator<<(std::ostream &os, AForm const &other);

#endif