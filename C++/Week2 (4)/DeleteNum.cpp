#include <iostream>
/******************************************** Functions Protoypes ***********************************************/

/*
 *Args:
 * 1- Array.
 * 2- Index of element that should be deleted.
 * 3- Calculate size of the array and store it in variable, then send the address to the function.
 * 
 * Return: None
*/

void DeleteArrayElementByIndex(int arr[], int index, int *size);

/*
 *Args:
 * 1- Array.
 * 2- Element that should be deleted.
 * 3- Calculate size of the array and store it in variable, then send the address to the function.
 * 
 * Return: None
*/

void DeleteArrayElement(int arr[], int element, int *size);

int main(int argc, const char** argv) 
{

    int arr[5] = {2 , 4 , 6 , 8 , 10};

    /*Calculate size of the aray*/
    int s = (sizeof(arr)/sizeof(arr[0]));

    DeleteArrayElement(arr, 8,&s);

    for(int i=0; i<s;i++)
    {
        std::cout<<arr[i]<<" ";
    }
    return 0;
}

void DeleteArrayElementByIndex(int arr[], int index , int *size)
{ 
    /* Keep shiftting the array to the left until reaching the end */
    while(index < (*size)-1)
    {
        /* Move the array elements to the left */
        arr[index] = arr[index+1];
        index++;
    }
    /* Check that index is within the array boundary*/
    if(index < (*size))
    /*Decrease the size. Indicates that element has been deleted*/
        (*size)--;
       
}
void DeleteArrayElement(int arr[], int element , int *size)
{ 
    /* Iterator to search for the element. */
    int i =0;

    /* Number of elements found */
    int deletes = 0;

    /* Keep moving until the required element found. */
    for(i=0; i< *size ;i++)
    {
        /* Shift the array to the left, once the element is found.*/
        if(arr[i]==element)
        {
            while(i < (*size)-1)
            {
                for(i; arr[i]!=element;i++);
                arr[i] = arr[i+1];
                i++;
                deletes++;
            }
        }
        
    }
    
    if(i <= (*size))
        /*Decrease the size. Indicates that element has been deleted*/
        (*size) -= deletes;
    
       
}