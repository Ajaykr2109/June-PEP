#include <iostream>
using namespace std;
class time
{

public:
    int hour, minute, second;
    time(){}
    time(int  mins)
    {
        hour = mins / 60;
        minute = mins % 60;
        second = 0;
    }
    void operator = (time t)
    {
        hour = t.hour;
        minute = t.minute;
        second = t.second;
    }
    int convert()
    {
        return hour * 60 + minute;
    }
    void display()
    {
        cout << hour << ":" << minute << ":" << second << endl;
    }

};

int main()
{
    int n=330;
    time t(n);
    time t1;
    t1=n;
    t.display();
    return 0;
}