#include <iostream>
#include <numeric>

int main(int argc, const char** argv) {
    
    int arr[5] = {12,32,53,44,15};
    int r = 0;

    r = std::accumulate(arr, arr + 5 , r);
        std::cout<< "Reult = " << r << std::endl;
    return 0;
}