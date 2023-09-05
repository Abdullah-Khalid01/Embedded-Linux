#include <iostream>

int* MegeArrays(int arr1[], int arr2[],int size1, int size2);

int main(int argc, char const *argv[])
{
    int arr1[] = {2 ,3 ,5 , 150};

    int arr2[] = {1 ,4 ,7,8,10};

    int* ptr = MegeArrays(arr1 , arr2 , sizeof(arr1)/sizeof(arr1[0]) , sizeof(arr2)/sizeof(arr2[0]));

    int NewSize = (sizeof(arr1)/sizeof(arr1[0]) + sizeof(arr2)/sizeof(arr2[0]));

    for(int i =0 ; i<NewSize;i++)
    {
        std::cout<< ptr[i] << " ";
    }
    return 0;
}


int* MegeArrays(int arr1[], int arr2[],int size1, int size2)
{
    int i=0;
    int size3 = size1 + size2;
    int counter=0;
    static int arr3[200];

    for(i = 0; i < size1; i++)
    {
        arr3[i] = arr1[counter++];
    }
    counter = 0;
    for(i; i < (size2+size1); i++)
    {
        arr3[i] = arr2[counter++];
    }
    return arr3;
}