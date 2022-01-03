/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:02:34 by jeonhyun          #+#    #+#             */
/*   Updated: 2022/01/03 17:02:34 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <vector>

class Span
{
    private :
        std::vector<int> container;
        unsigned int max_size;
    
    public :
        Span(unsigned int N);
        void addNumber(int num);
        long int shortestSpan();
        long longestSpan();

        class error : public std::exception
        {
            const char*  what() const throw()
            {
                return ("size error");
            }
        };
};