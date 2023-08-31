#include <iostream>

int main(int argc, const char** argv) {

    char c=0;
    std::cout << "Enter The character: " << std::endl;

    std::cin >> c;

    if(c == 'a' || c== 'e' || c== 'o' || c== 'i' || c== 'u' || c== 'A' || c== 'E' || c== 'O' || c== 'I' || c== 'U')
    {
        std::cout << "It's vowel" << std::endl;
    }
    else
    {
        std::cout << "Not vowel" << std::endl;
    }
    return 0;
}