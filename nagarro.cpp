// // C++ program to count occurrences of a given
// character
#include <iostream>
#include <string>
using namespace std;

// Function that return count of the given
// character in the string
int count(string s, char c)
{
	// Count variable
	int res = 0,r=0;
int i;
	for ( i=0;i<s.length();i++)
    {
		// checking character in string
		if (s[i] == 'a'||s[i] =='A'||s[i] =='e'||s[i] =='E'||s[i] =='i'||s[i] =='I'||s[i] =='o'||s[i] =='O'||s[i] =='u'||s[i] =='U')
        {
			continue;
        }
        else
        res++;

        if(s[i]==c)
        r++;
    }
    int con=s.length()-res;
        cout<<r<<endl;
	return con;
}

// Driver code
int main()
{
	string str= "geeksforgeeks";
	char c = 'e';
	cout << count(str, c) << endl;
	return 0;
}
