/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:56:21 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/17 13:56:22 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void){
}

Zombie::~Zombie(){
	std::cout << this->name << ": *Sounds of dying again*" << std::endl;
}

void Zombie::Zombie_spik(void){
	std::cout << this->name << ':' << " BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName(){
	return (this->name);
}

bool	Zombie::setName(std::string newName){
	if (newName == "")
		return false;
	this->name = newName;
	return true;
}