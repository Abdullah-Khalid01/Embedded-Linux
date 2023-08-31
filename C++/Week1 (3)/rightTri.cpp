#include <iostream>
#include <algorithm>

int main(int argc, const char** argv) {
    int arr[3] = {0};
    std::cout << "Enter Triangle Values to Check if Right or not: " << std::endl;
    

    for(int i=0; i<3; i++)
    {
        std::cin >> arr[i];
    }

   /***************************************************************** C style solution ********************************************************************************/

   
   /* for(int i=0; i<3; i++)
    {
        for(int j=i+1; j<3;j++)
        {
            if(arr[i]>arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
    

    if(((arr[0]*arr[0])+(arr[1]*arr[1]))==(arr[2]*arr[2]))
    {
        std::cout << "Right Triangle" << std::endl;
    }
    else
    {
        std::cout << "Not a Right Triangle" << std::endl;
    }*/


    /**************************************************************** C++ style solution *****************************************************************************/
	
    /* This line replaced the whole commented block above used to sort the array that contains lengths of the triangle */
    std::sort(arr, arr+ 3);

    /* if the summation of the square of the smallest two equales the square of thle largest length, the -----> Right triangle */
    if(((arr[0]*arr[0])+(arr[1]*arr[1]))==(arr[2]*arr[2]))
    {
        std::cout << "Right Triangle" << std::endl;
    }
    else
    {
        std::cout << "Not a Right Triangle" << std::endl;
    }

    return 0;
}
