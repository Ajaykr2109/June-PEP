#include <iostream>
using namespace std;

class complex
{

    int real, comp;

public:
    complex(int r, int c)
    {
        real = r;
        comp = c;
    }
    void display()
    {
        cout << real << "+" << comp << "i" << endl;
    }
    void plus(complex c)
    {
        real = real + c.real;
        comp = comp + c.comp;
    }

    complex operator+(complex c)
    {
        real = real + c.real;
        comp = comp + c.comp;
        return *this;
    }
    void multiply(complex c) // homework
    {
        real = real * c.real;
        comp = comp * c.comp;
    }
    void operator++()//prefix 
    {
        real++;
        comp++;
    }

};
int main()
{
    complex c(10, 3);
    complex c1(20, 10);
    // c1.plus(c);
    c1.multiply(c);
    complex c2 = c + c1;
    c1.display();
    // c2.display();
    ++c;
    c.display();
}