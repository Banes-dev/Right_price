/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/09/30 16:18:49 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "right_price.hpp"

int main(void)
{
	std::srand(static_cast<unsigned int>(std::time(0)));
	int nb_to_find = std::rand() % 100;
	std::string command;

	std::cout << Purple << "You must find the number who is between " << Yellow << "0 " << Purple << "and " << Yellow << "100" << Purple << ", good luck !" << Reset_Color << std::endl;
	while (1)
	{
		std::getline(std::cin, command);
		if (std::stoi(command) == nb_to_find)
		{
			std::cout << std::endl << Green << "Gg you have find : " << Yellow << nb_to_find << Reset_Color << std::endl;
			break;
		}
		if (std::stoi(command) < nb_to_find)
			std::cout << Cyan << Arrow_up << " More" << Reset_Color << std::endl;
		if (std::stoi(command) > nb_to_find)
			std::cout << Cyan << Arrow_down << " Less" << Reset_Color << std::endl;
	}
	
	return (0);
}
