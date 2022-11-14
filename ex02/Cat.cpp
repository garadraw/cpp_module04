/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:37:01 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/14 21:34:09 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Canonical */
Cat::Cat(): Animal()
{
	std::cout << "Cat Void Constructor Called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
	delete this->_brain;
}

Cat::Cat(const Cat &src): Animal()
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
