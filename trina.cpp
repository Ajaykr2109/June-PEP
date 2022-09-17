#include <iostream>
using namespace std;
int f(int n)
{
    return n--;
}
int main()
{
    
    int n=f(5);
    cout<<"N "<<n++;
}
