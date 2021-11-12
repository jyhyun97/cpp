/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:52:04 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/11/12 11:45:02 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

int main(void)
{
	std::string str;
	PhoneBook my_phonebook;

	my_phonebook.InitPhoneBook();
	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit (0);
		if (strcmp(str.c_str(), "ADD") == 0)
			my_phonebook.AddContact();
		else if (strcmp(str.c_str(), "SEARCH") == 0)
			my_phonebook.SearchContact();
		else if (strcmp(str.c_str(), "EXIT") == 0)
			exit (0);
		else
			std::cout << "please input only ADD, SEARCH or EXIT" << std::endl;
		std::cin.clear();
	}
	return (0);
}
