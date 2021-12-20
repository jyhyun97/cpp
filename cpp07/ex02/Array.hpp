/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:08:44 by jeonhyun          #+#    #+#             */
/*   Updated: 2021/12/16 16:08:44 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
    private :
        T *_arr;
        unsigned int _size;
    public :
        Array(){
            _arr = new T();
            _size = 0;
        };
        Array(unsigned int n){
            _arr = new T[n]();
            _size = n;
        };
        ~Array(){
            delete []_arr;
        };
        Array(const Array &origin){
            _arr = new T[origin._size];
            _size = origin._size;
            unsigned int i = 0;
            while (i < origin._size)
            {
                _arr[i] = origin._arr[i];
                i++;
            }
        };
        Array &operator=(const Array &origin){
            delete []_arr;
            _arr = new T[origin._size];
            _size = origin._size;
            unsigned int i = 0;
            while (i < origin._size)
            {
                _arr[i] = origin._arr[i];
                i++;
            }
            return (*_arr);
        };
        T &operator[](int index){
            if (index < 0 || index >= static_cast<int>(_size))
                throw IndexOverException();
            return (_arr[index]);
        };
        unsigned int size() const{
            return (_size);
        };
        class IndexOverException : public std::exception
        {
            const char* what() const throw(){
                return ("index over");
            }
        };
};

#endif