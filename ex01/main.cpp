/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:12:01 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/10 16:50:39 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
    try{
        Bureaucrat dahmad("dahmad");
        Form wati9a("wati9a");
    
        dahmad.IncrementGrade();
        wati9a.beSigned(dahmad);
        dahmad.signForm(wati9a);
     }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    
}