#include<iostream>
using namespace std;
int main()
{
    int n,count=1;
    cout<<"Enter the range: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            if (count>0)
            {
                for(int i=0; i<count; i++)
                {
                    cout<<"*";
                }
            }
            for(int j=0; j<n-count; j++)
            {
                cout<<"#";
            }
            cout<<"\n";
            count++;
        }

        else
        {
            for(int j=0; j<n-count; j++)
            {
                cout<<"#";
            }
            if (count>0)
            {
                for(int i=0; i<count; i++)
                {
                    cout<<"*";
                }
            }
            cout<<"\n";
            count++;
        }
    }
}
