#include <iostream>
#include <algorithm>
#include <cstring>
#include <utility>

class String
{
    int z;
private:
    int size = 0;
    friend std::ostream& operator <<(std::ostream& os, const String& obj);

    int length(const char* str)
    {
        int sizetemp = 0;
        while (str[sizetemp] != '\0')
        {
            sizetemp++;
        }
        return sizetemp;
    }

public:
    char* st = nullptr;

    bool IsEmpty();
    void append(const char* str);

    String() : st(nullptr), size(0) {}

    int length()
    {
        this->size = 0;
        if (this->st)
        {
            while ((this->st)[size] != '\0')
            {
                size++;
            }
        }
        return size;
    }

    explicit String(const char* str)
    {
        size = this->length(str);
        std::cout << "param const." << std::endl;
        st = new char[this->size + 1];
        strcpy(this->st, str);
    }

    explicit String(const String& obj)
    {
        std::cout << "copy const." << std::endl;

        if (this != &obj)
        {
            if ((this->size))
            {
                delete[] this->st;
            }
            this->size = obj.size;
            this->st = new char[size + 1];
            strcpy(this->st, obj.st);
        }
        else
        {
            this->st = nullptr;
        }
    }

    explicit String(String&& obj)
    {
        if ((obj.st) && (this != &obj))
        {
            size = obj.size;
            obj.size = 0;
            this->st = obj.st;
            obj.st = nullptr;
        }
    }

    void operator=(const String& obj)
    {
        std::cout << "copy assi." << std::endl;
        if (this != &obj)
        {
            if (this->st)
            {
                delete[] this->st;
            }
            this->size = obj.size;
            this->st = new char[size + 1];
            strcpy(this->st, obj.st);
        }
    }

    void operator=(String&& obj)
    {
        if ((obj.st) && (this != &obj))
        {
            size = obj.size;
            obj.size = 0;
            if (this->st)
            {
                delete[] this->st;
                this->st = nullptr;
            }
            this->st = obj.st;
            obj.st = nullptr;
        }
    }

    void operator=(const char* str)
    {
        if (this->st)
        {
            delete[] this->st;
        }
        this->size = length(str);
        this->st = new char[(this->size) + 1];
        strcpy(this->st, str);
    }

    ~String()
    {
        if (this->st)
        {
            delete[] this->st;
            this->st = nullptr;
            this->size = 0;
        }
    }
};

bool String::IsEmpty()
{
    bool res = false;
    if (this->size)
    {
        res = true;
    }
    return res;
}

void String::append(const char* str)
{
    int strsize = length(str);
    strsize = (this->size) + strsize;
    const char* temp = this->st;
    this->st = new char[(strsize) + 1];
    strcpy(this->st, temp);
    strcpy(((this->st) + (this->size)), str);
    this->size = strsize;
    delete[] temp;
    temp = nullptr;
}

std::ostream& operator<<(std::ostream& os, const String& obj)
{
    os << obj.st;
    return os;
}

int main()
{
    String x("Ali");
    std::cout << x << std::endl;
    std::cout << x.length() << std::endl;
    std::cout << "********************************************" << std::endl;

    x.append(" Ahmed");
    std::cout << x << std::endl;
    std::cout << x.length() << std::endl;
    std::cout << "********************************************" << std::endl;

    String y(std::move(x));
    std::cout << y << std::endl;
    std::cout << y.length() << std::endl;
    std::cout << "********************************************" << std::endl;

    std::cout << x.length() << std::endl;
    std::cout << "********************************************" << std::endl;

    y = "Ahmed";                        

    std::cout << y << std::endl;
    std::cout << y.length() << std::endl; 
    std::cout<< "********************************************" << std::endl;


    x= "Hamada";                        
    std::cout << x << std::endl;
    std::cout << x.length() << std::endl;
    std::cout<< "********************************************" << std::endl;

    y = std::move(x);
    std::cout << y << std::endl;
    std::cout << y.length() << std::endl; 
    std::cout<< "********************************************" << std::endl;

    std::cout << x.length() << std::endl;
    std::cout<< "********************************************" << std::endl;
    

    x = y;                              
    std::cout << x << std::endl;
    std::cout << x.length() << std::endl;
    std::cout<< "********************************************" << std::endl;

    x = x;                             
    std::cout << x << std::endl;
    std::cout << x.length() << std::endl;
    std::cout<< "********************************************" << std::endl;

    String z ( x);
    std::cout << z << std::endl;
    std::cout << z.length() << std::endl;
    std::cout<< "*******************************************" << std::endl;

    String m ( m);
    std::cout << m.length() << std::endl;
    std::cout<< "************************aaa*******************" << std::endl;

    return 0;
    
}

// The code demonstrates the implementation of a simplified string class called `String`. It provides basic string operations such as initialization, copying, appending, and printing. Here's a summary of the code:

// 1. The `String` class is defined with private member variables and public member functions. It represents a dynamic character array (`char*`) and keeps track of its size.

// 2. The `length` function (overloaded) is used to calculate the length of a C-style string (`const char*`).

// 3. The constructors:

//    - The default constructor initializes the `st` pointer to `nullptr` and sets the size to 0.
//    - The parameterized constructor (`explicit String(const char* str)`) initializes a string object with the provided C-style string. It allocates memory for the string and makes a copy using `strcpy`.
//    - The copy constructor (`explicit String(const String& obj)`) creates a new string object by making a deep copy of another string object.
//    - The move constructor (`explicit String(String&& obj)`) moves the contents of an rvalue object into a new string object efficiently by transferring ownership of the dynamically allocated memory.

// 4. The assignment operators:

//    - The copy assignment operator (`operator=(const String& obj)`) assigns the contents of one string object to another by making a deep copy.
//    - The move assignment operator (`operator=(String&& obj)`) efficiently moves the contents of an rvalue object into another object.
//    - The assignment operator (`operator=(const char* str)`) assigns a C-style string to a string object by deallocating the existing memory (if any) and creating a new copy.

// 5. The destructor (`~String()`) is responsible for freeing the dynamically allocated memory when a string object goes out of scope.

// 6. Additional member functions:

//    - `IsEmpty()` checks if the string is empty (size is nonzero).
//    - `append(const char* str)` appends a C-style string to the existing string by reallocating memory and concatenating the strings.

// 7. The `operator<<` function is overloaded to allow printing a string object using `std::cout`. It simply outputs the character array (`st`) to the output stream.

// 8. In the `main` function, various operations are performed on the `String` objects:

//    - An object `x` is created with the value "Ali" and printed.
//    - The length of `x` is printed.
//    - The string " Ahmed" is appended to `x`, and the resulting string is printed.
//    - An object `y` is created by moving the contents of `x`. The moved-from object `x` is printed to demonstrate that its content is now empty.
//    - The length of `y` is printed.

// Note that the code outputs additional information to the console to indicate which constructor or assignment operator is being used. This is helpful for understanding the flow of the code and the object's lifecycle.
