#include <iostream>
#include <algorithm>

bool IsEven(int num)
{
    return num %2 ==0;
}

int main(int argc, char const *argv[])
{   

    int ar[5] = {2,41,67,8,4};

    bool isEven = std::all_of(std::begin(ar),std::end(ar),IsEven);

    if (isEven)
    {
        std::cout << "The array is even." << std::endl;
    }
    else
    {
        std::cout << "The array is not even." << std::endl;
    }

    return 0;
}