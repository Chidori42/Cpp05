/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:12:01 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/05/12 10:50:42 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
    try{
        Bureaucrat dahmad("dahmad",1);
        Form wati9a("wati9a", 2, 2);

        dahmad.DecrementGrade();
        dahmad.signForm(wati9a);
     }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}