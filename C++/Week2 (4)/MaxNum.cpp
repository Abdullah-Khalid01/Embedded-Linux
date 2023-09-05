#include <iostream>
#include <algorithm>


/* Function Prototype
 * Args: 
 * 1- array of type uint8
 * 2- Size of the array
 * 
 * *********************************************************************************
 * Return: uint8
 * 
 * *********************************************************************************/
uint8_t FindMax(uint8_t arr[] , uint8_t size);

int main(int argc, const char** argv) {

    uint8_t arr[] = {10,25,33,44,55,110,240};
    /* Calculate the maximum using FindMax and cast it to int to be able to print it using std::cout */

    std::cout<< "Maximum Number = " << static_cast<int>(FindMax(arr,sizeof(arr)/ sizeof(arr[0]))) <<std::endl;
    return 0;
}

uint8_t FindMax(uint8_t arr[] , uint8_t size)
{
    uint8_t* max2 = (std::max_element(arr,arr+size));
    
    return (static_cast<int>(*max2));

}