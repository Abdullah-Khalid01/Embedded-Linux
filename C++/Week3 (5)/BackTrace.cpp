#include <iostream>
#include <vector>


#define __TRACING__ BackTrace b(__PRETTY_FUNCTION__);
// Define a class called BackTrace
class BackTrace
{
    public:
    std::string name;
    // Declare a static vector of strings called bt
    static std::vector<std::string> bt;

    // Constructor that takes a string argument
    BackTrace(std::string name): name("Enter: ")
    {
        // Append the provided name to the "Enter: " prefix
        this->name.append(name);

        // Add the current name to the bt vector
        bt.push_back(this->name);
    }

    // Destructor
    ~BackTrace()
    {
        // Replace the "Enter: " prefix with "Exit: "
        this->name.replace(0, 7, "Exit : ");

        // Check if the name contains "main"
        if ((this->name).find("main") != std::string::npos)
        {
            // Print the current name if it contains "main"
            std::cout << this->name << std::endl;
        }

        // Add the current name to the bt vector
        bt.push_back(this->name);
    }
};

// Define the static bt vector
std::vector<std::string> BackTrace::bt;

// Function fun1
void fun1()
{
    // Create an instance of BackTrace with the provided function name
    __TRACING__
}

// Function fun2
void fun2()
{
    // Create an instance of BackTrace with the provided function name
    __TRACING__

    // Call function fun1
    fun1();
}

// Main function
int main(int argc, char const *argv[])
{
    // Create an instance of BackTrace with the main function name
    __TRACING__

    // Call function fun2
    fun2();

    // Print a separator
    std::cout << "****************m*****************" << std::endl;

    // Iterate over the bt vector and print each element
    for (auto i : BackTrace::bt)
    {
        std::cout << i << std::endl;
    }

    return 0;
}
