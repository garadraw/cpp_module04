/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:16:46 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/14 19:43:47 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	{
	Brain brain;

	std::string str[100];
	const std::string *thoughts;
	str[0] = "Tri";
	str[1] = "lu";
	str[2] = "Li";
	str[3] = "Luu";

	brain.setThoughts(str);
	thoughts = brain.getThoughts();
	for (int i = 0; i < 4; i++)
		std::cout << thoughts[i] << std::endl;
		
	}
	std::cout << std::endl;
	std::cout << std::endl;





	std::cout << "SUBJECT TEST" << std::endl;
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}





	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "SUBJECT TEST 2" << std::endl;
	{
	Animal* animals[10];
	for(int i = 0; i < 10; i++)
	{
		if (i < 5) {animals[i] = new Cat();}
		else {animals[i] = new Dog();}
	}
	
	for(int i = 0; i < 10; i++)
	{
		std::cout << animals[i]->getType() << std::endl;
	}
	for(int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
	}	

	return 0;
}