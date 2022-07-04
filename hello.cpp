// Input: "aaa*bbb"
// Output: ababab
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

int main()
{
    Solution s("aaa*bbb");
    cout << s.solve();
    return 0;
}
