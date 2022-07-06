#include <iostream>
using namespace std;

class height
{
public:
    int feet;
    int inches;

    height()
    {
        
    }
    double convert()
    {
        return (feet * 12 + inches);
    }
    height(int f, int i)
    {
        feet = f;
        inches = i;
    }
    void operator=(height h)
    {
        feet = h.feet;
        inches = h.inches;
    }
    void display()
    {
        cout << feet << "\'" << inches << "\"" << endl;
    }
};
int main()
{
    height h1(5, 6);
    height h2;
    h2 = h1;
    h2.display();
    return 0;
}
//Input: "aaa*bbb"
//Output: ababab
#include<iostream>
using namespace std;
class Solution{
public:
    string str;
    Solution(string s){
        str = s;
    }
    string solve(){
        string result = "";
        for(int i = 0; i < str.length(); i++){
            if(str[i] == '*'){
                result += str[i-1];
                result += str[i-1];
            }
            else{
                result += str[i];
            }
        }
        return result;
    }
};
int main(){
    Solution s("aaa*bbb");
    cout << s.solve();
    return 0;
}