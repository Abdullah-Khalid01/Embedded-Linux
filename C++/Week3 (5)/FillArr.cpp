#include <iostream>
#include <numeric>

int main(int argc, char const *argv[])
{
    int arr[15000];

    int *ptr_st = &arr[10];
    int *ptr_end = &arr[10001];

    std::iota(ptr_st,ptr_end,0);
    
    for(int i=10; i<201;i++)
    {
    std::cout << arr[i] << std::endl;
    }
    return 0;
}