/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:37:05 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/13 13:50:12 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Canonical */
Dog::Dog(): Animal()
{
	std::cout << "Dog Void Constructor Called" << std::endl;
	this->_type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
}

Dog::Dog(const Dog &src): Animal()
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	this->_type = src._type;
}

Dog &Dog::operator=(Dog const &src)
{
	std::cout << "Dog Overloader function Called" << std::endl;
	this->_type = src._type;
	return (*this);
}


/* Public Functions*/
void Dog::makeSound(void) const
{
	std::cout << "Dog Sound" << std::endl;
}
