// find the number which divides all the elements of the array
// #include<iostream>
// using namespace std;
// int main()
// {

//     int a;
//     cin >> a;

//     for (int i=1;i<=a;i++)
//     {
//         int b=i*2;
//         for(int j=0;j<b;j++)
//         {
//             cout<<"1 ";
//         }
//         cout<<endl;
//     }
// }
//find the elements which are appearing once in an array
//convert this into vector and sort it and then find the unique elements
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int i=0;
    while(i<n-1)
    {
        if(v[i]==v[i+1])
        {
            v.erase(v.begin()+i);
            n--;
        }
        else
        {
            i++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}

#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,5,6,7,8,9,4,4,2,1,3,5};
    int ans[50];
    int count=0;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        int flag=0;
        for(int j=0;j<sizeof(arr)/sizeof(arr[0]);j++)
        {
            if(arr[i]==arr[j])
            {
                flag++;
            }
        }
        if(flag==1)
        {
            ans[count]=arr[i];
            count++;
        }
    }
    for(int i=0;i<count;i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}