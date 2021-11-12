/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:55:24 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/11/12 11:38:23 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::SetZero()
{
	index = 0;
	first_name = "";
	last_name = "";
	nick_name = "";
	phone_number = "";
	darkest_secret = "";
};

void Contact::SetContact(int i)
{
	index = i;
	std::cout << "please input first_name\n> ";
	std::getline(std::cin, first_name);
	if (std::cin.eof())
		exit(0);
	std::cout << "please input last_name\n> ";
	std::getline(std::cin, last_name);
	if (std::cin.eof())
		exit(0);
	std::cout << "please input nick_name\n> ";
	std::getline(std::cin, nick_name);
	if (std::cin.eof())
		exit(0);
	std::cout << "please input phone_number\n> ";
	std::getline(std::cin, phone_number);
	if (std::cin.eof())
		exit(0);
	std::cout << "please input darkest_secret\n> ";
	std::getline(std::cin, darkest_secret);
	if (std::cin.eof())
		exit(0);
};

int	Contact::GetIndex()
{
	return (index);
};

void Contact::SetIndex(int i)
{
	index = i;
};

void Contact::PrintElement(std::string str)
{
	int i = 0;
	if (str.length() < 11)
	{
		while (i < 10 - static_cast<int>(str.length()))
		{
			std::cout << ".";
			i++;
		}
		std::cout << str;
	}
	else
	{
		while (i < 9)
		{
			std::cout << str[i];
			i++;
		}
		std::cout << ".";
	}
};

void Contact::PrintTable()
{
	std::cout << "|";
	PrintElement(std::to_string(index));
	std::cout << "|";
	PrintElement(first_name);
	std::cout << "|";
	PrintElement(last_name);
	std::cout << "|";
	PrintElement(nick_name);
	std::cout << "|" << std::endl;
};

void Contact::Printfield()
{
	std::cout << "Index : " << std::to_string(index) << std::endl;
	std::cout << "First name : " << first_name << std::endl;
	std::cout << "Last name : " << last_name << std::endl;
	std::cout << "Nickname : " << nick_name << std::endl;
};
