/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:16:46 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/14 21:36:16 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Cat *cat = new Cat;
	cat->makeSound();
	std::cout << std::endl;
	Dog *dog = new Dog;
	dog->makeSound();
	std::cout << std::endl;
	
	delete cat;
	delete dog;

	return 0;
}