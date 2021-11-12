/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:57:55 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/11/12 11:47:52 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

void PhoneBook::InitPhoneBook()
{
	int i = 0;
	while (i < 8)
	{
		contact[i].SetZero();
		i++;
	}
};

void PhoneBook::AddContact()
{
	int i = 0;
	int j = 0;
	while (contact[i].GetIndex() != 0 && i < 8)
		i++;
	if (i == 8)
	{
		j = 0;
		while (j < 7)
		{
			contact[j] = contact[j + 1];
			contact[j].SetIndex(contact[j].GetIndex() - 1);
			j++;
		}
		i--;
	}
	contact[i].SetContact(i + 1);
};

void PhoneBook::SearchContact()
{
	int i = 0;
	while (contact[i].GetIndex() != 0 && i < 8)
	{
		contact[i].PrintTable();
		i++;
	}
	if (i == 0)
	{
		std::cout << "there is no contact in this phone book." << std::endl;
		return ;
	}
	std::cout << "please input index number\n> ";
	std::cin >> i;
	if (std::cin.eof())
		exit(0);
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (i >= 1 && i <= 8 && contact[i - 1].GetIndex() != 0)
		contact[i - 1].Printfield();
	else
		std::cout << "wrong number" << std::endl;
};
