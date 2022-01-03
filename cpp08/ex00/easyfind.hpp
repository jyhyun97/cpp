/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:02:16 by jeonhyun          #+#    #+#             */
/*   Updated: 2022/01/03 17:02:17 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>

class notfound : public std::exception
{
    const char*  what() const throw()
    {
        return ("not found");
    }
};

template <typename T>
typename T::iterator easyfind(T container, int find_value)
{
    typename T::iterator it;
    
    it = std::find(container.begin(), container.end(), find_value);
    if (it == container.end())
        throw notfound();
    return (it);
}