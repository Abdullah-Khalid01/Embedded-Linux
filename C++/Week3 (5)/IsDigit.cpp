#include <iostream>

int main(int argc, char const *argv[])
{
    char character = '0';
    
    if(std::isdigit(character))
    {
        std::cout << "It's a digit" << std::endl;
    }
    else
    {
        std::cout << "It's not a digit" << std::endl;
    }
    
    return 0;
}
