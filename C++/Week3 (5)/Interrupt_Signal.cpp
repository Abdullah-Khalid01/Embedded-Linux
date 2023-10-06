#include <iostream>
#include <cstdlib>
#include <signal.h>
#include <unistd.h>

// Signal handler function for interrupt signal (SIGINT)
void InterruptSignalHandler(int signum)
{
    // Print the signal number caught
    std::cout << "\nSignal Caught: " << signum << std::endl;

    // Exit the program with the same signal number
    exit(signum);
}

// Main function
int main(int argc, char const *argv[])
{
    // Register the InterruptSignalHandler function to handle SIGINT
    signal(SIGINT, InterruptSignalHandler);

    // Print "Processing" without a newline
    std::cout << "Processing" << std::flush;

    // Enter an infinite loop
    while (1)
    {
        // Print a dot without a newline
        std::cout << "." << std::flush;

        // Sleep for 1 second
        sleep(1);
    }

    return 0;
}
