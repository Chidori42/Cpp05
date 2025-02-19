/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 10:48:44 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/02/19 11:20:32 by ael-fagr         ###   ########.fr       */
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
        Bureaucrat(std::string name);
        ~Bureaucrat();
        Bureaucrat(Bureaucrat const &other);

        Bureaucrat &operator=(Bureaucrat const &other);

        std::string getName();
        int getGrade();
        void setGrade(int grad);

        void GradeTooHighException();
        void GradeTooLowException();
};

#endif