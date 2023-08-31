#include <iostream>


int main(int argc, const char** argv) {
    
    int num =0;
    int result =0;
    std::cout << "Enter Number" << std::endl;

    std::cin >> num;
    while (num != 0)
    {
    	/* Get the last element of the numebr and add it to result var. */
        result += (num %10);
        
        /* Divide by 10 to get the next element */
        num /= 10;
    }
    std::cout << "Result = " << result << std::endl;
    return 0;
}
