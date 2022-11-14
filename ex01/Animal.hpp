/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:36:59 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/14 19:24:11 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
	
		std::string _type;

	public:
		Animal();
		Animal(std::string name);
		Animal(const Animal &src);
		Animal &operator=(const Animal &src);
		virtual ~Animal();

		virtual void makeSound() const;
		std::string getType(void) const;
};

#endif