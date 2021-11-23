#include "karen.hpp"

void    Karen::debug(void)
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!" << std::endl;
}

void Karen::info(void)
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money.\nYou don’t put enough!\nIf you did I would not have to ask for it!" << std::endl;
}

void    Karen::warning(void)
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month." << std::endl;
}

void    Karen::error( void )
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void    Karen::exception( void )
{
    std::cout << "[ Probably complaining about insignificant problems ]" <<std::endl;
}

Karen::Karen(void)
{
    function_arr[0] = &Karen::debug;
    function_arr[1] = &Karen::info;
    function_arr[2] = &Karen::warning;
    function_arr[3] = &Karen::error;
    function_arr[4] = &Karen::exception;
}

void Karen::complain(std::string level)
{
    std::string sentence_arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int i = 0;
    
    while (i < 4 && level.compare(sentence_arr[i]))
        i++;
    switch (i)
    {
    case 0:
        (this->*function_arr[0])();
    case 1:
        (this->*function_arr[1])();
    case 2:
        (this->*function_arr[2])();
    case 3:
        (this->*function_arr[3])();
        break;
    default:
        (this->*function_arr[4])();
        break;
    }
}
