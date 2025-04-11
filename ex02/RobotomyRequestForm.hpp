/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:28:45 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/11 23:16:29 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include <fstream>

class RobotomyRequestForm : public AForm{
    private:
        std::string name;
        std::string target;
        bool isSigned;
        int gradeToSign;
        int gradeToExecute;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string name);
        ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const &other);

        RobotomyRequestForm &operator=(RobotomyRequestForm const &other);
        void execute(Bureaucrat const & executor) const;
        std::ofstream CreateFileForm();
        void setTarget(std::string target);
        std::string getTarget() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        void setIsSigned(bool isSigned);
        void setGradeToSign(int gradeToSign);
        void setGradeToExecute(int gradeToExecute);
        void setName(std::string name);
        std::string getName() const;
        std::string getFormName() const;

        void beSigned(Bureaucrat br);
        void executeForm(Bureaucrat const & executor) const;

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

std::ostream &operator<<(std::ostream &os, RobotomyRequestForm const &other);

#endif