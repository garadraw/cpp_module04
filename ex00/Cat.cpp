/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:37:01 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/13 13:51:12 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Canonical */
Cat::Cat(): Animal()
{
	std::cout << "Cat Void Constructor Called" << std::endl;
	this->_type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
}

Cat::Cat(Cat const &src): Animal()
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	this->_type = src._type;
}

Cat &Cat::operator=(Cat const &src)
{
	std::cout << "Cat Overloader function Called" << std::endl;
	this->_type = src._type;
	return (*this);
}

/* Public Functions */
void Cat::makeSound(void) const 
{
	std::cout << "Cat Sound" << std::endl;
}
