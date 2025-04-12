#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include "Bureaucrat.hpp"

int main(){
    try{
        Bureaucrat br("Ael-Fagr", 1);
        Bureaucrat br2("Ael-Fagr", 150);
        RobotomyRequestForm form;
        std::cout << form << std::endl;
        br.executeForm(form);
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
}
