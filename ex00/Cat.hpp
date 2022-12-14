/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:37:02 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/13 13:19:15 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
	public:
		Cat();
		Cat(std::string name);
		Cat(Cat const &src);
		Cat &operator=(Cat const &src);
		~Cat();

		void makeSound(void) const;
};

#endif