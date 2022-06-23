// // // //Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line with  places after the decimal.
// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // int main()
// // // // {
// // // //     int n;
// // // //     cin>>n;
// // // //     int a[n];
// // // //     for(int i=0;i<n;i++)
// // // //     {
// // // //         cin>>a[i];
// // // //     }
// // // //     int pos=0,neg=0,zero=0;
// // // //     for(int i=0;i<n;i++)
// // // //     {
// // // //         if(a[i]>0)
// // // //         {
// // // //             pos++;
// // // //         }
// // // //         else if(a[i]<0)
// // // //         {
// // // //             neg++;
// // // //         }
// // // //         else
// // // //         {
// // // //             zero++;
// // // //         }
// // // //     }
// // // //     cout<<fixed<<setprecision(1)<<(float)pos/n<<endl;
// // // //     cout<<fixed<<setprecision(1)<<(float)neg/n<<endl;
// // // //     cout<<fixed<<setprecision(1)<<(float)zero/n<<endl;
// // // //     return 0;
// // // // }
// // // //by vector array
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main()
// // // {
// // //     int n;
// // //     cin>>n;
// // //     vector<int> a(n);
// // //     for(int i=0;i<n;i++)
// // //     {
// // //         cin>>a[i];
// // //     }
// // //     int pos=0,neg=0,zero=0;
// // //     for(int i=0;i<a.size();i++)
// // //     {
// // //         if(a[i]>0)
// // //         {
// // //             pos++;
// // //         }
// // //         else if(a[i]<0)
// // //         {
// // //             neg++;
// // //         }
// // //         else
// // //         {
// // //             zero++;
// // //         }
// // //     }
// // //     cout<<(float)pos/n<<endl;
// // //     cout<<(float)neg/n<<endl;
// // //     cout<<(float)zero/n<<endl;
// // //     return 0;
// // // }

// // // HackerLand University has the following grading policy:

// // // Every student receives a  in the inclusive range from  to .
// // // Any  less than  is a failing grade.
// // // Sam is a professor at the university and likes to round each student's  according to these rules:

// // // If the difference between the  and the next multiple of  is less than , round  up to the next multiple of .
// // // If the value of  is less than , no rounding occurs as the result will still be a failing grade.
// // // Examples

// // //  grade 84 round to  (85 - 84 is less than 3)
// // // grade 29 do not round (result is less than 40)
// // // grade 57 do not round (60 - 57 is 3 or higher)
// // // grade 67 round to 68 (67 - 67 is less than 3)
// // //using vector array

// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int n;
// //     cin>>n;
// //     vector<int> a(n);
// //     for(int i=0;i<n;i++)
// //     {
// //         cin>>a[i];
// //     }
// //     for(int i=0;i<n;i++)
// //     {
// //         // if(a[i]<40)
// //         // {
// //         //     cout<<a[i]<<endl;
// //         // }
// //         // else
// //         // {
// //         //     int x=a[i]%5;
// //         //     if(x>2)
// //         //     {
// //         //         cout<<a[i]+5-x<<endl;
// //         //     }
// //         //     else
// //         //     {
// //         //         cout<<a[i]<<endl;
// //         //     }
// //         // }
    
// //     return 0;
// // }
// // //error no match for call to '(std::vector<int>) (int&)
// // //using vector array return in different vector array
// // #include <bits/stdc++.h>
// // using namespace std;
// // // vector<int> gradingStudents(vector<int> grades)
// // // {
// // //     vector<int> a;
// // //     for(int i=0;i<grades.size();i++)
// // //     {
// // //         if(grades[i]<38)
// // //         {
// // //             a.push_back(grades[i]);
// // //         }
// // //         else
// // //         {
// // //             int x=grades[i]%5;
// // //             if(x>2)
// // //             {
// // //                 a.push_back(grades[i]+5-x);
// // //             }
// // //             else
// // //             {
// // //                 a.push_back(grades[i]);
// // //             }
// // //         }
// // //     }
// // //     return a;
// // // }
// // //withouut define
// // void miniMaxSum(vector<int> arr) {
// //     int min = INT_MAX;
// //     int max = INT_MIN;
// //     int sum = 0;
// //     for (int i = 0; i < arr.size(); i++)
// //     {
// //         sum += arr[i];
// //         if (arr[i] < min)
// //         {
// //             min = arr[i];
// //         }
// //         if (arr[i] > max)
// //         {
// //             max = arr[i];
// //         }
// //     }
// //     cout << sum - max << " " << sum - min << endl;
    

// // }
// // int main()
// // {

// //     string arr_temp_temp;
// //     getline(cin, arr_temp_temp);

// //     vector<string> arr_temp = split(rtrim(arr_temp_temp));

// //     vector<int> arr(5);

// //     for (int i = 0; i < 5; i++) {
// //         int arr_item = stoi(arr_temp[i]);

// //         arr[i] = arr_item;
// //     }

// //     miniMaxSum(arr);

// //     return 0;
// // } 


// // //write a program to find the sum of all the elements in a vector
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main()
// // // {
// // //     int n;
// // //     cin>>n;
// // //     vector<int> a(n);
// // //     for(int i=0;i<n;i++)
// // //     {
// // //         cin>>a[i];
// // //     }
// // //     int sum=0;
// // //     for(int i=0;i<n;i++)
// // //     {
// // //         sum+=a[i];
// // //     }
// // //     cout<<sum<<endl;
// // //     return 0;
// // // }


// //arr=[1,3,5,7,9]
// //minimum sum is 1+3+5+7=16 maximum sum is 1+3+5+7+9=25
// void miniMaxSum(vector<int> arr) {
    int min = INT_MAX;
    int max = INT_MIN;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    //sort the array using loop
  
    cout << sum - max << " " << sum - min << endl;
    

// }

/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

//without INT_MAX and INT_MIN

void miniMaxSum(vector<int> arr) {
    

}
for (int i = 0; i < arr.size(); i++)
{
    for (int j = i + 1; j < arr.size(); j++)
    {
        if (arr[i] > arr[j])
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}
what is arr.begin() and arr.end()   ?

void miniMaxSum(vector<int> arr) {
    int sum=0;
for (int i = 0; i < arr.size(); i++)
{
    for (int j = i + 1; j < arr.size(); j++)
    {
        if (arr[i] > arr[j])
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    sum+=arr(i);
}    
    cout << sum - arr.begin() << " " << sum - arr.end() << endl;
    

}
find smallest and largest element in a vector
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<min<<" "<<max<<endl;
    return 0;
}

