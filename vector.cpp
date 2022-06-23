#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class matrix
{

    vector<vector<int>> mat; // 2d array/vector

public:
    matrix(int a = 0)
    {
        mat = vector<vector<int>>(10, vector<int>(10, a));
    }

    void display()
    {
        for (int i = 0; i < this->mat.size(); i++)
        {
            for (int j = 0; j < this->mat[i].size(); j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    matrix operator+(matrix m)
    {
        matrix res;
        for (int i = 0; i < this->mat.size(); i++)
        {
            for (int j = 0; j < this->mat[i].size(); j++)
            {
                res.mat[i][j] = mat[i][j] + m.mat[i][j];
            }
        }

        return res;
    }
};
int main()
{
    // vector<int> v(5, 10); // 1d array/vector with 5 elements and all elements are 10
    matrix m1(5);
    matrix m2(6);

    matrix res = m1 + m2;
    res.display();
    return 0;
}