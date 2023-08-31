#include <iostream>


int main() {

    std::cout << "-------------------" << std::endl;
    std::cout << "| Char  |  Ascii|" << std::endl;
    int a=0;
    
    /* Print all Characters from 0 to 127 */
    for(unsigned char i=0; i<128;i++)
    {
    	/* To print the ASCII value of each character*/
        a=i;
	
	/* These cases are used only for allignments */
        if(i>=33 && i<100)
        {
        std::cout <<"|      " << i << "|" << a << "     |"  << std::endl;
        }
        else if (i>=100 && i<127)
        {
            std::cout <<"|      " << i << "|" << a << "    |"  << std::endl;
        }
        else if (i== 127)
        {
            std::cout <<"|       " << i << "|" << a << "    |"  << std::endl;
        }
        else
        {
            if(a>9)
            {
            std::cout <<"|       |"<<  a << "     |  " << std::endl;

            }
            else
            {
                std::cout <<"|       |"<<  a << "      |  " << std::endl;
            }
        }
    }

    return 0;
}
