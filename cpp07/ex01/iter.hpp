#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void Iter(T *address, int length, void (*function)(T))
{
    int i = 0;
    while (i < length)
    {
        function(address[i]);
        i++;
    }
}

#endif