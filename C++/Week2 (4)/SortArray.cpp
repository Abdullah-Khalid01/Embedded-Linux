#include <iostream>
#include <algorithm>

auto asscending = [](int first, int second)
    {
            return first < second;       
    };

auto desscending = [](int first, int second)
    {
            return first > second;       
    };   

int main(int argc, char const *argv[])
{
    /* code */
    int arr[10] = {1,2,3,4,5,20,33,5,8,64};
    std::sort( &arr[0], &arr[10],asscending);

    for(int i : arr)
    {
        std::cout<<i<<" ";
    }
    return 0;
}
