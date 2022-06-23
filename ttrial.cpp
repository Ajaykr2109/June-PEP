#include <iostream>
using namespace std;
int main()
{
    int n,count = 1;
    cout << "Enter the range: ";
    cin >> n;
    if(n%2!=0)n-=1;
    for (int i = 0; i < n; i++)
    {
        if(i<(n/2))
        {

            if (i % 2 == 0)
            {
                for (int i = 0; i < count; i++)
                {
                    cout << "*";
                }
                for (int j = 0; j < n - count; j++)
                {
                    cout << "#";
                }
                cout << "\n";
                count++;
            }

            else
            {


                for (int i = 0; i <n-count; i++)
                {
                    cout << "#";
                }

                for (int j = 0; j < count; j++)
                {
                    cout << "*";
                }
                cout << "\n";
                count++;
            }
        }

        else
        {

            if (i % 2 == 0)
            {

                --count;
                for (int i = 0; i <count; i++)
                {
                    cout << "*";
                }

                for (int j = 0; j <n- count; j++)
                {
                    cout << "#";
                }
                cout << "\n";

            }
            else
            {
                --count;
                for (int i = 0; i <n-count; i++)
                {
                    cout << "#";
                }

                for (int j = 0; j <count; j++)
                {
                    cout << "*";
                }
                cout << "\n";

            }
        }
    }


}
