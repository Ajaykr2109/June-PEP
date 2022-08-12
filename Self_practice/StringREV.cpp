
#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str;
    cin >> str;
    int n = str.length();

    char i[2];
    i[0] = str[0];
    i[1] = str[1];

    for (int i = 0; i < str.length() / 2; i++)
    {
        int temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }

    str[n - 1] = i[1];
    str[n - 2] = i[0];

    cout << str;
    return 0;
}