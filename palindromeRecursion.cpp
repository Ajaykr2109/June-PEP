#include<iostream>
#include<string.h>
using namespace std;
//without recursion
/*bool check_palin(string s)
{
int start=0;
int end=s.size()-1;
while(start<=end)
{
if(s[start]!=s[end])return 0;
start++;
end--;
}
return 1;
}*/
bool helper(string s,int start,int end)
{
//base case
if(start==end)return 1;

//small cal./ our job
if(s[start]!=s[end]) return 0;

//recursive call
return helper(s,start+1,end-1);
}
bool check_palin(string s)
{
return helper(s,0,s.size()-1);
}
int main()
{
string s;
cin>>s;
if(check_palin(s))
{
cout<<"Yes!It is a palindrome.!"<<endl;
}
else
{
cout<<"No!It is Not a palindrome.!";
}
}