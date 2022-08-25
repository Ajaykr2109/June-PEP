// #include<iostream>
// using namespace  std;

// int uniquePair(int n)
// {
//     int count = 0;
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=i+1; j<=n; j++)
//         {
//             if(i+j==n)
//             {
//                 count++;
//             }
//         }
//     }
//     return count;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     cout << uniquePair(n);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// N=5
// arr[]={10,3,4,8,6}
// Output=6
// Explanation:
// The pairs are (10,3) (10,4) (3,4) (4,8) (10,8) (8,6)
// The above pairs are the inly pairs which doesn't have any larger element greater than left element.

// int min(int a, int b)
// {
//     return a < b ? a : b;
// }

// int countPairs(int n, int arr[])
// {
//     int count = 0, s = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {

//             for (int k = i + 1; k < j; k++)
//             {
//                 if (arr[i] > arr[k] && arr[j] >= arr[k])
//                 {
//                     cout << "else" << endl;
//                     count++;
//                 }
//             }
//         }
//     }
//     return count;
// }
// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << countPairs(n, arr);
// }

// input: 100jjfjfbh564fjdjffdf365bg
// output: 365

#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int max=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            int temp=s[i]-'0';
            while(i<s.length()&&s[i]>='0'&&s[i]<='9')
            {
                temp=temp*10+s[i]-'0';
                i++;
            }
            if(temp>max)
            {
                max=temp;
            }
        }
    }
    cout<<max;
    return 0;
}
