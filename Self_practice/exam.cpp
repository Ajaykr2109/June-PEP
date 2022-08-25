    #include<iostream>
    using namespace std;
// 9 is replaced by its greatest prime divisor 3 
//3 reduced to 2 and 2 reduced to 1
//1 reduced to 0

int reduction(int number)
#include<bits/stdc++.h> 
using namespace std; 
int reduction(int n) 
{ 
    int count = 0; 
    while(n > 1) 
    { 
        if(n % 2 == 0) 
        { 
            n = n / 2; 
            count++; 
        } 
        else 
        { 
            n = n - 1; 
            count++; 
        } 
    } 
    return count; 
} 
int main() 
{ 
    int n; 
    cin >> n; 
    cout << reduce(n); 
    return 0; 
}