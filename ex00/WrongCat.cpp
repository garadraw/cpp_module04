/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:19:50 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/13 12:40:53 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/* Canonical */
WrongCat::WrongCat(): WrongAnimal()
{
	std::cout << "WrongCat Void Constructor Called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongAnimal Destructor Called" << std::endl;
}



/* Getters and Setters */
std::string WrongCat::getType(void) const
{
	return _type;
}



/* Public Functions */
void	WrongCat::makeSound(void) const
{
	std::cout << "Wrongcat Sound!" << std::endl;

}
