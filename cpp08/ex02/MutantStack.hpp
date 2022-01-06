/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:02:45 by jeonhyun          #+#    #+#             */
/*   Updated: 2022/01/06 14:40:29 by jeonhyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
    public :
        MutantStack() : MutantStack<T>::stack() {};
        ~MutantStack(){};
        MutantStack(const MutantStack<T> &origin) : MutantStack<T>::stack(origin) {};
        MutantStack &operator=(const MutantStack<T> &origin){
            MutantStack<T>::stack::operator=(origin);
            return (*this);
        };

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

        iterator begin(){ return(this->c.begin()); };
        iterator end(){ return(this->c.end()); };
        const_iterator begin() const { return(this->c.begin()); };
        const_iterator end() const { return(this->c.end()); };
        
        reverse_iterator rbegin() {return(this->rbegin());};
        reverse_iterator rend(){return(this->rend());};
        const_reverse_iterator rbegin() const {return(this->rbegin());};
        const_reverse_iterator rend() const {return(this->rend());};
        
        const_iterator cbegin() const {return (this->c.cbegin());};
        const_iterator cend() const {return (this->c.cend());};
        const_reverse_iterator crbegin() const {return (this->c.crbegin());};
        const_reverse_iterator crend() const {return (this->c.crend());};
};

#endif