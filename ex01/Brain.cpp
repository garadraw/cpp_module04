/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:48:11 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/14 18:52:19 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* Canonical */
Brain::Brain(){
	std::cout << "Dog Void Constructor Called" << std::endl;
}

Brain::~Brain(){
	std::cout << "Dog Destructor Called" << std::endl;
}

Brain::Brain(const Brain& obj){
	std::cout << "Dog Copy Constructor Called" << std::endl;
	*this = obj;
}

Brain& Brain::operator=(const Brain& obj){
	std::cout << "Dog Overloader function Called" << std::endl;
	std::copy(obj.getThoughts(), obj.getThoughts() + 100, this->_thoughts);
	return *this;
}



/* Getters and Setters */
const std::string* Brain::getThoughts( void ) const{
	return this->_thoughts;
}

void Brain::setThoughts( const std::string* _thoughts ){
	std::copy(_thoughts, _thoughts + 100, this->_thoughts);
}
