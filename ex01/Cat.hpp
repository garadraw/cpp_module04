/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:37:02 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/14 19:29:23 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
		Brain *_brain;
		
	public:
		Cat();
		Cat(std::string name);
		Cat(const Cat  &src);
		Cat &operator=(const Cat &src);
		~Cat();

		void makeSound(void) const;
};

#endif