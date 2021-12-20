#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
    public :
        MutantStack(){};
        ~MutantStack(){};
        MutantStack(const MutantStack &origin){
            *this = origin;
        };
        MutantStack &operator=(const MutantStack &origin){
            std::stack<T>::operator=(origin);
            return (*this);
        };

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

        iterator begin(){ return(this->c.begin()); };
        iterator end(){ return(this->c.end()); };
        reverse_iterator rbegin() {return(this->rbegin());};
        reverse_iterator rend(){return(this->rend());};
        const_iterator cbegin(){return (this->c.cbegin());};
        const_iterator cend(){return (this->c.cend());};
        const_reverse_iterator crbegin(){return (this->c.crbegin());};
        const_reverse_iterator crend(){return (this->c.crend());};
};

#endif