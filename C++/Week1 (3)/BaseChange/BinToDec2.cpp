#include <iostream>
#include <cmath>


int main(int argc, const char** argv) {
    
    /* Variables to store the required operation and the number to be manipulated. */
    int Num=0;
    int option =0;

    std::cout << "Choose an Option: \n 1- Binary to Decimal\n 2- Decimal to Binary" << std::endl;

    std::cin >> option;


    if (option !=1 || option != 2)
    {
        std::cout << "Wrong Option!!" << std::endl;
    }


    /* Binary To Decimal Case:*/
    if      (option == 1)
    {
        std::cout << "Enter Number :" << std::endl;

        std::cin >> Num;

        /* In this algorithm I rely on the concept of bits in binary system, which each bit represents 2^i (i ranges from zero to infinity) */
        int i=0;
        int reminder=0;
        int ans = 0;

        while(Num != 0 )
        {
            /* Deteremine if the bit is zero or one*/
            reminder = Num % 2;

            /* multiply and add the result to ans variable */
            ans += reminder * pow(2,i);

            /* increment i*/
            i++;

            /* divide number by 10 to determine if the next bit is zero or one */
            Num /= 10;
        }
        std::cout << "Result = "<< ans << std::endl;
    }

    /* Decimal To Binary Case: */
    else if (option == 2)
    {
        std::cout << "Enter Number :" << std::endl;

        std::cin >> Num;

        /* The same algorithm */
        int i=1;
        int reminder=0;
        long long ans = 0;

        while(Num != 0 )
        {
            reminder = Num % 2;
            ans += reminder * i;
            i*=10;
            Num /= 2;
        }
        std::cout << "Result = "<< ans << std::endl;
    }

    return 0;
}

