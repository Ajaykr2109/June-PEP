#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Write C++ code here
    string str = "oweowowlajaylsl";
    string str1 = "ajay";
    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < str.length(); j++)
        {
            if (str[i] == str1[j])
            {
                count++;
                if (count == str1.length())
                {
                    cout << "Found" << endl;
                    break;
                }
            }
        }
    }

    return 0;
}