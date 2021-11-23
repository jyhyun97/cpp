#include <iostream>

int main(void)
{
    std::string stringORG = "HI THIS IS BRAIN";
    std::string* stringPTR = &stringORG;
    std::string& stringREF = stringORG;

    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
    
    return (0);
}