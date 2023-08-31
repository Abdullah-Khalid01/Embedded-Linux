#include <iostream>
#include <stdio.h>

/* Here Iam using MACROS to convert from decimat to binary (GET_BIT) and from binary to decimal (SET_BIT)*/

#define GET_BIT(VAL,BIT)     ((VAL >> BIT) & 1)
#define SET_BIT(VAL,BIT)     ( VAL |= (1<<BIT))


int main(int argc, const char** argv) {

    int Num=0;
    int option =0;

    std::cout << "Choose an Option: \n 1- Binary to Decimal\n 2- Decimal to Binary" << std::endl;

    std::cin >> option;
    

    
    if      (option == 1)
    {   
        int temp;
        std::cout << "Enter Bits (Enter 32 to set rest of bits to 'zero'):" << std::endl;
        /* Receiving the binary number bit by bit*/
        for(int i=0;i<32;i++)
        {
                std::cout << "Bit "<< i << " : ";
                std::cin >> temp;
                /* If the entered bit equals one (Set), otherwise don't do anything because the Num variable is initialized by zero*/
                if(temp == 1)
                {
                    SET_BIT(Num,i);
                }

                /* This to facilitate the operation if the MSBs are all equal to zero */
                else if(temp ==32)
                {
                    break;
                }
        }
        std::cout << "Num = " << Num << std::endl;
    }
    else if (option == 2)
    {
        std::cout << "Enter Number :" << std::endl;

        std::cin >> Num;

        int i=32;
        std::cout << "0b";

        /* Iam using GET_BIT to get the state of each bit (zero or one) and print directly to the screen*/
        while(i>-1)
        {
            std::cout << GET_BIT(Num,i);
            i--;
        }
    }
    else
    {
        std::cout << "Wrong Option!!" << std::endl;
    }

    return 0;
}