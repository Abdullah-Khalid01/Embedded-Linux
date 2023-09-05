#include <iostream>
/************************************************** Function Prototype *************************************************/
/*
 * Args   : arr (Array to be manipulated) && Size (Sizeof the array).
 * 
 * return : pointer to pointer to int (return array whose elements are pointers to int).
 * 
 * Note   : Last element in the array is null to indicate end of the array.
 *  
 */

int** EvenOrOdd(int arr[], int Size);

int main(int argc, char const *argv[])
{
    int a[] = {1,2,3,4,5,6};

    /* Pointer to pointer to store the address of the returned array */
    int **r = {0};

    /* Call the function and receive the returned array */
    r = EvenOrOdd(a,6);

    /* Loop through the array to retrieve elements (r[0] --- > odd elements && r[1] --> even elements )*/
    for(int i = 0; r[0][i] != '\0' ; i++)
    {
        std::cout<<r[0][i]<<" ";
    }
    return 0;
}

int** EvenOrOdd(int arr[] , int Size)
{
    /* To get the number of even and odd elements which will help in creating arrays to store odd and even numbers */
    int counterodd=0;
    int countereven=0;

    /* To loop through the main array */
    int iterator=0;

    /* store the addresses of the odd and even array */
    static int* result[2];

    /* Loop through the main array to get the counts of even and odd numbers. */
    while(iterator < Size)
    {
        if((arr[iterator]%2) == 0)
        {
            countereven++;
        }
        else
        {
            counterodd++;
        }
        iterator++;
    }

    /* Allocate the odd and even array dynamically || (+1) to store the null value, which indicates end of the array. */

    int *odd  = new int[counterodd+1];

    int *even = new int[countereven+1];

    /* Re-initialize all counters for the next operation. */
    iterator = 0;

    countereven=0;

    counterodd =0;


    /* Assign values to the odd and even arrays */
    for(iterator =0; iterator < Size; iterator++)
    {
        if((arr[iterator]%2) == 0)
        {
            even[countereven++] = arr[iterator];
        }
        else
        {
            odd[counterodd++] = arr[iterator];
        }
    }

    /* last value of each array should be null to indicate end of the array.*/
    even[countereven] = '\0';
    odd[counterodd]   = '\0';

    /* Assign the addressess of the odd and even array to elements of the result array. result array elements are pointer to int*/
    result[0]=odd;
    result[1]=even;

    /* Return result */
    return result;
}
