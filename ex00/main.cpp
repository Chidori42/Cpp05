/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:12:01 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/09 16:30:07 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat dahmad("dahmad");
        std::cout << "Default grade is " << dahmad.getGrade() << std::endl;
        dahmad.DecrementGrade();
        std::cout << "the grade after Decremented is " << dahmad.getGrade() << std::endl;
        dahmad.DecrementGrade();
     }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    
}