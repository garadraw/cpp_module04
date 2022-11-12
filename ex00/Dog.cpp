/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:37:05 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/12 20:41:24 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


/* Canonical */
Dog::dog(): Animal()
{
	std::cout << "Dog Void Constructor Called" << std::endl;
	this->_type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
}

Dog::Dog(Dog const &src)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	this->_type = src._type;
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Dog Overloader function Called" << std::endl;
	this->_type = src._type;
}


/* Public Functions*/
void Dog::makeSound(void) const
{
	std::cout << "Dog Sound" << std::endl;
}
