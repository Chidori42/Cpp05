#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

#include "Bureaucrat.hpp"

int main(){
    try{
        Intern someRandomIntern;
        Bureaucrat executor;
        Form* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        rrf->execute(executor);
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
}
