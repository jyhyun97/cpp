/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:59:11 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/16 15:59:12 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <math.h>

class Convert{
    public :
        Convert(){};
        ~Convert(){};
        Convert(const Convert &origin);
        Convert &operator=(const Convert &origin);

        void convertChar(const char *numString);
        void convertInt(const char *numString);
        void convertFloat(const char *numString);
        void convertDouble(const char *numString);

        class ExceptCase : public std::exception
        {
            private :
                std::string _message;
            public :
                ExceptCase(std::string message){_message = message;};
                const char* what() const throw() {
                    return (this->_message.c_str());
                }
                ~ExceptCase() throw(){};
        };
};

#endif
