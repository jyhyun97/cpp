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