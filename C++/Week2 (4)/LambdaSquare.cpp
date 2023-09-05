#include <iostream>

    auto square = [] (int number) -> int
    {
        return (number * number);
    };


int main(int argc, const char** argv) {
 

    std::cout << "square = " <<square(5) << std::endl;

    return 0;
}