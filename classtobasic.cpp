#include <iostream>
using namespace std;

class height
{
public:
    int feet;
    int inches;

    height()
    {
        
    }
    double convert()
    {
        return (feet * 12 + inches);
    }
    height(int f, int i)
    {
        feet = f;
        inches = i;
    }
    void operator=(height h)
    {
        feet = h.feet;
        inches = h.inches;
    }
    void display()
    {
        cout << feet << "\'" << inches << "\"" << endl;
    }
};
int main()
{
    height h1(5, 6);
    height h2;
    h2 = h1;
    h2.display();
    return 0;
}