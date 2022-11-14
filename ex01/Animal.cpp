/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:36:38 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/14 18:37:54 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* Canonical */
Animal::Animal() : _type("Trilulilu")
{
	std::cout << "Animal Void Constructor Called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
	this->_type = src._type;
}

Animal &Animal::operator=(const Animal &src)
{
	std::cout << "Animal Overloader function Called" << std::endl;
	this->_type = src._type;
	return *this;
}

/* Getters and Setters */
std::string Animal::getType(void) const 
{
	return this->_type;
}

/* Public Functions */
void Animal::makeSound(void) const
{
	std::cout << "Animal Sound" << std::endl;
}
