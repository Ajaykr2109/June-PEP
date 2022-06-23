#include <iostream>
using namespace std;
int main()
{
    int tc, i, hrs;
    cout << "Enter the number of Test Cases!!!" << endl;
    cin >> tc;

    while (tc > 0)
    {
        cout << "Enter the number of piles" << endl;
        cin >> i;
        cout << "Enter the Hours" << endl;
        cin >> hrs;

        int arr[i], mid;
        cout << "Now Enter the number of bananas in each pile" << endl;
        for (int nob = 0; nob < i; nob++)
        {
            cin >> arr[nob];
        }

        // sorting the array
        for (int nob = 0; nob < i; nob++)
        {
            for (int nob1 = 0; nob1 < i; nob1++)
            {
                if (arr[nob] < arr[nob1])
                {
                    int temp = arr[nob];
                    arr[nob] = arr[nob1];
                    arr[nob1] = temp;
                }
            }
        }

        mid = (arr[0] + arr[i - 1]) / 2;

        for (int nob = 0; nob < i; nob++)
        {
            if (arr[nob] > mid)
            {
                if (((nob+1) - hrs) == 0)
                {
                    mid++;
                }
                // cout << "\nValue of K " << arr[nob] << endl;
            }
        }
         cout << "\nValue of K " << mid << endl;
        tc--;
    }
    return 0;
}
