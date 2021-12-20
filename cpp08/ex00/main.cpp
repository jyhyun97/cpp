#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>

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
    //컴파일러로서는 vector<T>::iterator가 멤버 이름인지 형식 이름인지를 알 수 없기 때문입니다. 
    //위의 분 지적대로 그 앞에 typename 을 붙여서 형식 이름임을 알려주어야 합니다.
    
    it = std::find(container.begin(), container.end(), find_value);
    if (it == container.end())
        throw notfound();
    return (it);
}

int main()
{
    std::vector<int> test1;
    std::deque<int> test2;
    for (int i = 0; i < 5; i++)
    {
        test1.push_back(i);
        test2.push_back(i + 10);
    }
    try
    {
        std::cout << *(::easyfind(test1, 3)) << std::endl;
        std::cout << *(::easyfind(test2, 13)) << std::endl;
        std::cout << *(::easyfind(test2, 20)) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    /*
    easyfind라는 템플릿 함수를 만들고, T, int를 미개변수로 함
    T는 인트의 컨테이너고,, 두번째 매개변수에서 첫번째 occurrence를 찾는다
    찾지 못하면 exception이나 return 에러하기 표준 컨테이너의 작동방식에서 아이디어를 얻으세요
    이걸 잘 테스트하는 메인문을 작성하기.
    */
   return (0);
}