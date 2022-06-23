//capital letter at every space encountered
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the string!"<<endl;
    string s;
    getline(cin,s);

    string ans=" ";
    stringstream ss(s);
    string x=" ";
    while(getline(ss,x,' '))
    {
        x[0]=toupper(x[0]);
        ans=" "+x;
    }
    ans=ans.substr(1);
    cout<<ans<<endl;
    /*  int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]==' ')
        {
            s[i]=toupper(s[i]);
        }
    }
    cout<<s<<endl;*/
    return 0;

}
