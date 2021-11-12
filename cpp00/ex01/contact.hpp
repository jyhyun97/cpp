/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:56:41 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/11/11 09:45:01 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
	private :
		std::string darkest_secret;
		std::string phone_number;
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		int index;
	public :
		void SetZero();
		void SetContact(int i);
		int GetIndex();
		void SetIndex(int i);
		void PrintElement(std::string str);
		void PrintTable();
		void Printfield();
};

#endif
