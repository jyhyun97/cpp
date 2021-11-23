#ifndef KAREN_HPP
# define KAREN_HPP
#include <iostream>

class Karen
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
        void exception( void );
        void (Karen::*function_arr[5])(void);
    public:
        Karen(void);
        void complain( std::string level );
};

#endif