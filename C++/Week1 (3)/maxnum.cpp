#include <iostream>
#include <algorithm>


int main(int argc, const char** argv) {

    /* C Style */
    std::cout << "Enter 3 Numbers: " << std::endl;
    int Nums[3] = {0};
    
    /* Read 3 Numbers from the use */
    for(int i=0; i<3; i++)
    {
        std::cin >> Nums[i];
    }
	
    /* Assume that first element is the largest */
    int maximum = Nums[0];
    
    /* Compare First element with other elements */
    for(int i=1; i<3;i++)
    {
        if(maximum < Nums[i])
        {
           /* Assign the bigger value to max variable */
            maximum = Nums[i];
        }
    }

    std::cout << "maximum Number = " << maximum << std::endl;
    
    /********************************** C++ Style ***************************************************/
    
    /* Using the max function in algorithm library */
    maximum = std::max(Nums[0],std::max(Nums[1],Nums[2]));

    std::cout << "maximum Number = " << maximum << std::endl;


    return 0;
}
