#include <iostream>

/* Sample code to test pure virtual function and virtual pointer */
class shape
{
    public:
    virtual void draw(void) = 0;
};

class circle: public shape
{
    public:
        void draw(void);
};

class square: public shape
{
    public:
        void draw(void);
};

class rectangle: public shape
{
    public:
        void draw(void);
};

void square::draw(void)
{
    std::cout << "square" << std::endl;
}

void circle::draw(void)
{
    std::cout << "circle" << std::endl;
}

void rectangle::draw(void)
{
    std::cout << "rectangle" << std::endl;
}

int main(int argc, char const *argv[])
{   
    shape* p;
    circle c;
    square s;
    rectangle r;

    p = &c;

    p->draw();

    p=&s;

    p->draw();

    p = &r;

    p->draw();

    return 0;
}
