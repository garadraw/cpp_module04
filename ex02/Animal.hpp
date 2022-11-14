/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:36:59 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/14 21:31:33 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		Animal();
		std::string _type;

	public:
		Animal(std::string name);
		Animal(const Animal &src);
		Animal &operator=(const Animal &src);
		virtual ~Animal();

		virtual void makeSound() const = 0;
		std::string getType(void) const;
};

#endif