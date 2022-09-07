#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

string getTown(vector<string> peoplenames)
{
    string answer;
    // largest common substring
    int n = peoplenames.size();
    int m = peoplenames[0].size();
    int dp[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            dp[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0)
            {
                if (peoplenames[i][j] == peoplenames[i + 1][j])
                {
                    dp[i][j] = 1;
                }
            }
            else if (i == n - 1)
            {
                if (peoplenames[i][j] == peoplenames[i - 1][j])
                {
                    dp[i][j] = 1;
                }
            }
            else
            {
                if (peoplenames[i][j] == peoplenames[i + 1][j] || peoplenames[i][j] == peoplenames[i - 1][j])
                {
                    dp[i][j] = 1;
                }
            }
        }
    }
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (dp[i][j] == 1)
            {
                int count = 0;
                int k = j;
                while (dp[i][k] == 1)
                {
                    count++;
                    k++;
                }
                if (count > max)
                {
                    max = count;
                    answer = peoplenames[i].substr(j, count);
                }
            }
        }
    }

    return answer;
}

int main()
{

    int size;
    cin >> size;
    vector<string> peopleNames;

    for (int idx = 0; idx < size; idx++)
    {
        string temp;
        cin >> temp;

        peopleNames.push_back(temp);
    }
    string result = getTown(peopleNames);

        cout << result;

    return 0;
}


