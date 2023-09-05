#include <iostream>

int SearchInArr(int arr[],int left, int right , int key);

int main(int argc, const char** argv) {

    int array[10] = {10,20,30,40,50,60,70,80,90,100};

    int x = SearchInArr(array,0,(sizeof(array)/sizeof(array[0])-1),30);

    std::cout<<x<<std::endl;
    return 0;
}


int SearchInArr(int arr[],int left, int right , int key)
{
    int m = 0;
    int result = 0;
    
    while(left <= right)
    {
        m = left + (right - left) /2;
        if(key == arr[m])
        {
            result = arr[m];
            break;
        }
        else if (key < arr[m])
        {
           right = m - 1 ;
        }
        if(key > arr[m])
        {
            left = m + 1;
        }

    }

    return result;


}