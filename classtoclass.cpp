#include <iostream>
using namespace std;
class metric
{

public:
    int km;
    int m;
    int cm;
    metric() {}
    metric(int k, int m, int c)
    {
        km = k;
        this->m = m;
        this->cm = c;
    }
    metric(imperial i)
    {
        km = i.ft * 0.3048;
        m = i.in * 0.0254;
        cm = i.yd * 0.9144;
    }
    void operator=(metric m)
    {
        km = m.km;
        this->m = m.m;
        this->cm = m.cm;
    }
    void display()
    {
        cout << km << " " << m << " " << cm << endl;
    }
};

class imperial
{
public:
    int ft;
    int in;
    int yd;
    imperial() {}
    imperial(int f, int i, int y)
    {
        ft = f;
        this->in = i;
        this->yd = y;
    }
    imperial(metric m)
    {
        ft = m.km * 3281;
        this->in = m.m * 39370;
        this->yd = m.cm * 46656;
    }

    
    void operator=(imperial i)
    {
        ft = i.ft;
        this->in = i.in;
        this->yd = i.yd;
    }
    void display()
    {
        cout << ft << " " << in << " " << yd << endl;
    }
};
int main()
{
    metric m1(1, 2, 3);
    imperial i1(1, 2, 3);
    metric m2;
    imperial i2;
    m2 = i1;
    i2 = m1;
    m2.display();
    i2.display();
    return 0;
}