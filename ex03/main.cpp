#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

#include "Bureaucrat.hpp"

int main(){
    try{
        Intern someRandomIntern;
        Bureaucrat executor("lhaj l3arbi", 2);
        Form* rrf;
        rrf = someRandomIntern.makeForm("shrubbery creation request", "Bender");
        rrf->beSigned(executor);
        rrf->execute(executor);
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
}
