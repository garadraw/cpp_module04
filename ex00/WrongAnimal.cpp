/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:19:37 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/14 19:45:45 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* Canonical */
WrongAnimal::WrongAnimal() : _type("CichiRicky")
{
	std::cout << "WrongAnimal Void Constructor Called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
	this->_type = src._type;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src)
{
	std::cout << "WrongAnimal Overloader function Called" << std::endl;
	this->_type = src._type;
	return (*this);
}



/* Getters and Setters */
std::string WrongAnimal::getType(void) const
{
	return this->_type;
}



/* Public Functions */
void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimals Sound!" << std::endl;
}