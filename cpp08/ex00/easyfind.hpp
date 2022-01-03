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