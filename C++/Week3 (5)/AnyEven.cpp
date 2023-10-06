#include <iostream>
#include <algorithm>

bool IsEven(int num)
{
    return num % 2 == 0;
}

int main(int argc, char const *argv[])
{


    int arr[] = {17, 31, 51, 75, 89}; // Example array

    bool hasEven = std::any_of(std::begin(arr), std::end(arr), IsEven);

    if (hasEven)
    {
        std::cout << "The array has at least one even value." << std::endl;
    }
    else
    {
        std::cout << "The array does not have any even value." << std::endl;
    }

    return 0;
}
