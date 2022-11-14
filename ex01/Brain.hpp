/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:44:26 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/14 19:22:28 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
		std::string _thoughts[100];

	public:
		Brain();
		Brain(const Brain& obj);
		Brain& operator=(const Brain& boj);
		~Brain();

		void setThoughts(const std::string *thoughts);
		const std::string *getThoughts(void) const;

};

#endif