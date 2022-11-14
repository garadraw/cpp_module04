/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:37:07 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/13 13:36:40 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
	public:
		Dog();
		Dog(std::string name);
		Dog(Dog const &src);
		Dog &operator=(const Dog &src);
		~Dog();

		void makeSound(void) const;
};

#endif