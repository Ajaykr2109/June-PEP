#include <iostream>
#include <string>
using namespace std;

int main()
{
    int str[] = {
        12,
        2,
        3,
        4,
        5,
        6,
    };
    int n = sizeof(str) / sizeof(str[0]);

    for (int i = 0; i < n / 2; i++)
    {
        int temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
    /*for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(str[i]<str[j])
            {
                int tem=str[i];
                str[i]=str[j];
                str[j]=tem;
            }
       *}
    }*/
    or (int i = 0; i < n; i++)
                cout
            << str[i] << " ";
    return 0;
}