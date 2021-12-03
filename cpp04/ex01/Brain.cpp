#include "Brain.hpp"

Brain::Brain(){
    int i = 0;
    while (i < 100)
    {
        this->idea[i] = "";
        i++;
    }
};

Brain::~Brain(){

};

Brain::Brain(const Brain &origin){
    *this = origin;
};

Brain &Brain::operator=(const Brain &origin){
    if (this == &origin)
        return (*this);
    int i = 0;
    while (i < 100)
    {
        this->idea[i] = origin.idea[i];
        i++;
    }
    return (*this);
};
