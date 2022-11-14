/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:16:46 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/14 19:44:55 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "ANIMAL TESTS" << std::endl;
	{
	Animal beta;
	std::cout << beta.getType() << std::endl;
	std::cout << std::endl;
	
	Animal alpha(beta);
	Animal charlie;
	charlie = beta;
	std::cout << std::endl;
	
	std::cout << "alpha type: " << alpha.getType() << std::endl;
	std::cout << "charlie type: " << charlie.getType() << std::endl;
	alpha.makeSound();
	charlie.makeSound();
	std::cout << std::endl;
	}
	std::cout << std::endl;



	std::cout << "CAT TESTS" << std::endl;
	{
	Cat beta;
	std::cout << beta.getType() << std::endl;
	std::cout << std::endl;
	
	Cat alpha(beta);
	Cat charlie;
	charlie = beta;
	std::cout << std::endl;
	
	std::cout << "alpha type: " << alpha.getType() << std::endl;
	std::cout << "charlie type: " << charlie.getType() << std::endl;
	alpha.makeSound();
	charlie.makeSound();
	std::cout << std::endl;
	}
	std::cout << std::endl;











	std::cout << "DOG TESTS" << std::endl;
	{
	Dog beta;
	std::cout << beta.getType() << std::endl;
	std::cout << std::endl;
	
	Dog alpha(beta);
	Dog charlie;
	charlie = beta;
	std::cout << std::endl;
	
	std::cout << "alpha type: " << alpha.getType() << std::endl;
	std::cout << "charlie type: " << charlie.getType() << std::endl;
	alpha.makeSound();
	charlie.makeSound();
	std::cout << std::endl;
	}
	std::cout << std::endl;






	std::cout << "SUBJECT TESTS" << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << std::endl;
		
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << std::endl;
		
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		std::cout << std::endl;

		delete meta;
		delete i;
		delete j;
	}
	std::cout << std::endl;




	std::cout << "SUBJECT TESTS 2" << std::endl;
	{
	const WrongAnimal* meta = new WrongAnimal();
	const Animal* j = new Dog();
	const WrongAnimal* i = new WrongCat();
	std::cout << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl;

	i->makeSound(); //will output the Wrongcat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	delete meta;
	delete i;
	delete j;
	}

	return 0;
}