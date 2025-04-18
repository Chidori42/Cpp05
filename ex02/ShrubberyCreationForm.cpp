/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:26:24 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/18 15:54:37 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): target(target){
}
ShrubberyCreationForm::~ShrubberyCreationForm(){
    
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : AForm(other){
    *this = other;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other){
    if (this == &other)
        return *this; 
    return *this;
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    if (this->getGradsign() > 145 || this->getGradexecute() > 137)
        throw GradeTooLowException();
    if (AForm::getWassigned() == false)
        throw FormNotSignedException();
    CreateFileForm();
    std::cout << "ShrubberyCreationForm: " << AForm::getname()
        << " has been executed by " << executor.getName() << std::endl;

}
void ShrubberyCreationForm::CreateFileForm() const{
    std::string str = "_shrubbery";
    std::ofstream file((this->getTarget() + str).c_str());
    if (file.is_open()){
        file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡠⠖⠒⠢⣄⣀⡀⣀⣀⠀⡠⠖⠒⠒⢤⡀⠀⠀⠀⠀⠀⠀\n";
        file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⡇⠀⠀⠀⠁⠠⡋⠀⠀⠙⠦⠀⠀⠀⠀⣧⠤⣀⠀⠀⠀⠀\n";
        file << "⠀⠀⠀⠀⠀⠀⠀⡠⠖⠊⠑⠲⣄⣀⣠⠖⠘⠛⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⢸⠇⠀⠀⠀\n";
        file << "⠀⠀⠀⠀⠀⠀⣸⣇⡀⠀⠀⠈⠁⠀⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠋⠲⣄⠀⠀\n";
        file << "⠀⠀⠀⠀⣠⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀  ⢀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡼⠂⠀\n";
        file << "⠀⠀⠀⢀⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀  ⠀⠈⠀⠀⢱⠀⠀⠀⠀⠀⠀⠀⠐⠺⡄⠀⠀\n";
        file << "⠀⡠⠊⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⡀⠀⢀⡼⠀⠀⠀⠀⠀⠀⠀⠀⢀⡇⠀⠀\n";
        file << "⢰⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠈⠉⠁⡹⠀⠀⠀⣄⣀⡠⠟⢘⣯⣀⠀⠀\n";
        file << "⠸⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⡷⠺⡍⠒⣿⣀⣠⡀⠀⠀⠀⠀⠀⠈⠀⠈⠀⠈⡷⠀\n";
        file << "⠀⢸⠚⠉⠀⠀⠀⠀⠀⠀⠀⠀⢀⣶⠺⡁⠀⠙⠚⠀⠁⡏⢧⣀⡄⠀⠀⠀⠀⠐⠒⣇⠀\n";
        file << "⠀⠸⣄⣀⣰⠀⠀⠀⠀⠀⠀⠲⣟⣿⡦⣷⠀⠀⠀⠀⢠⠁⣸⣿⣷⢶⡆⢀⣤⡀⣠⡾⠁\n";
        file << "⠀⠀⠀⠀⠱⣀⠀⢀⡱⠄⠤⠜⠋⠻⡄⠀⠀⠀⠀⠀⣸⣴⡿⣏⠀⢀⣭⣁⣀⡽⠁⠀⠀\n";
        file << "⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠸⠀⠀⠀⠀⠀⣿⡼⠁⠀⠉⠉⠀⠀⠀⠀⠀⠀⠀\n";
        file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡆⠀⠀⠀⠀⢿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣧⠀⠀⠀⠀⠸⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        file << "         ⠀⠀⠀⠀⠀⢀⡼⠁⠀⠀⠀⠀⠈⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡴⠒⢋⣁⡀⠀⠀⠀⠀⠀⠘⠢⢄⣀⠀⠀⠀⠀⠀⠀⠀⠀\n";
        file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠉⠁⠉⠙⠒⠤⣘⣗⠒⠒⠒⠚⠛⠃⠀⠀⠀⠀⠀⠀\n";
        file.close();
    } else {
        std::cerr << "Error: Unable to open file." << std::endl;
    }
}

std::string ShrubberyCreationForm::getTarget() const{
    return (this->target);
}

const char *ShrubberyCreationForm::GradeTooHighException::what() const throw(){
    return "The ShrubberyCreationForm Grade Is To High";
}
const char *ShrubberyCreationForm::GradeTooLowException::what() const throw(){
    return "The ShrubberyCreationForm Grade Is To Low";
}
const char *ShrubberyCreationForm::FormNotSignedException::what() const throw(){
    return "The ShrubberyCreationForm Is Not Signed";
}