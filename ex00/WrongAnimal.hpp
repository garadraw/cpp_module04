/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:19:40 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/13 12:23:44 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal
{
	protected:
	
		std::string _type;

	public:

		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(WrongAnimal const &src);
		WrongAnimal &operator=(WrongAnimal const &src);

		std::string getType(void) const;
		virtual void makeSound(void) const;
};

#endif