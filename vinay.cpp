// double pointer
#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int, **pt = new int *,i=10000;
    ptr = &i;
    *pt = ptr;
    cout << *ptr << endl;
    cout << **pt << endl;
    delete ptr;
    return 0;
}