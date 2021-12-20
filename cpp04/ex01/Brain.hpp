#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    private :
        std::string idea[100];
    public :
        Brain();
        ~Brain();
        Brain(const Brain &origin);
        Brain &operator=(const Brain &origin);
        void setIdea(int idx, std::string str);
        std::string GetIdea(int idx);
};

#endif