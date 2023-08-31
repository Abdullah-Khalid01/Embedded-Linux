#include <iostream>

int main(int argc, const char** argv) {
    
    /* Variable to maintain the value of the required table */
    int TableOf =0;
	
    std::cout << "Enter Required Table Number To Be Printed: ";

    std::cin >> TableOf;
    
    std::cout << "Table of " << TableOf << ": \n" << std::endl;

    /* Print the required multiplication table from 1 to 12 */
    for(int i=1; i<12; i++)
    {
        std::cout << TableOf << " X " << i << " = " << (TableOf * i) << std::endl; 
    } 

    return 0;
}
