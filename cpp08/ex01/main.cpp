#include <iostream>
#include <algorithm>
#include <vector>



class Span
{
    private :
        std::vector<int> container;
        unsigned int max_size;
    
    public :
        Span(unsigned int N){
            max_size = N;
        }
        void addNumber(int num)
        {
            if (container.size() >= max_size)
                throw error();
            container.push_back(num);
        }
        long int shortestSpan(){
            if (container.size() <= 1)
                throw error();
            std::sort(container.begin(), container.end());
            std::vector<int>::iterator it = container.begin();
            long int rst = LONG_MAX;
            while (it != container.end() - 1)
            {
                long tmp;
                if (*it > *(it + 1))
                    tmp = static_cast<long>(*it) - static_cast<long>(*(it + 1));
                else
                    tmp = static_cast<long>(*(it + 1)) - static_cast<long>(*it);
                if (tmp < rst)
                    rst = tmp;
                ++it;
            }
            return (rst);
        };
        long longestSpan(){
            if (container.size() <= 1)
                throw error();
            std::sort(container.begin(), container.end());
            long rst;
            rst = static_cast<long>(container.back()) - static_cast<long>(container.front());
            return (rst);
        };
        class error : public std::exception
        {
            const char*  what() const throw()
            {
                return ("나중에 좀 더 수정");
            }
        };
};

int main()
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    

    /*
    
    N개 int를 저장할 수 있는 클래스를 만들고,, N은 unsigned int임 그리고 생성자의 유일한 매개변수로 주어진다
    //Class(unsigned int N){};
    본 클래스는 숫자를 하나 저장하는 함수를 갖고 있음 (addNumber) 이걸 사용해서 채울 수 있고
    만약 N개 다 찼으면 던지세용
    shortestSpan : 숫자 사이에서 제일 짧은 간격 찾아 반환
    longestSpan : 숫자 사이에서 제일 긴 간격 찾아 반환
    둘 다 저장된 숫자가 0 혹은 1개면 찾을 수 있는 게 없으니 던지기
    최소 10000개를 테스트하는데 반복자를 사용하는 게 좋을 것이라는 뉘앙스로 적혀있음

    */
   return (0);
}