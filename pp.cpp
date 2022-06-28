// Input: "aabbcde"
// Output: 2a2b1c1d1e
// Final Output: 2aXb1X1dXeiXcjXrmXn7X
#include<iostream>
#include<string>
using namespace std;

string countAndReplace(string str)
{
    //Input: "aabbcde"
// Output: 2a2b1c1d1e
// Final Output: 2aXb1X1dXeiXcjXrmXn7X
    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        int count = 1;
        while (i+1 < str.length() && str[i] == str[i+1])
        {
            count++;
            i++;
        }
        result += to_string(count) + str[i];
    }
    string final = "iscj3rm4n79";
     result += final;
    for (int i = 1; i < final.length()+1; i++)
    {//replace 3rd with a X
        if (i % 3 == 0)
        {
            result[i-1] = 'X';
        }
    } 
   
    return result;

}

int main(void) { 
   
  // keep this function call here
  string a="aabbccddee";
  cout << countAndReplace(a);
  return 0;
    
}