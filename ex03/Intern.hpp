/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 22:05:13 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/17 00:01:38 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern{
    public:
        Intern();
        ~Intern();
        Intern(Intern const &other);
    
        Intern &operator=(Intern const &other);
        Form* makeForm(std::string formName, std::string formTarget);
}

#endif