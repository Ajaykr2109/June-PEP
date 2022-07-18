// input: "whereabouts"
// output: "CVCVCVC"
// C for consonants V for vowels
// CVCVCVC
#include <iostream>
//#include<bits/stdc++.h>
using namespace std;
// char *vowl(char *str)
// {
//     char *vowel = new char[sizeof(str) / sizeof(str[0])];
//     //  char *ans = new char[sizeof(str) / sizeof(str[0])];
//     int i = 0;
//     while (str[i] != '\0')
//     {
//         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
//         {
//             if(i==0)
//             { vowel[i]='V';}

//            else if (vowel[i - 1] != 'V')
//             {
//                 vowel[i] = 'V'; // putting V for vowels
//             }
//         }
//         else
//         {
//             if(i==0)
//             { vowel[i]='C';}

//            else if (vowel[i - 1] != 'C')
//             {
//                 vowel[i] = 'C'; // putting C for consonants
//             }
//         }
//         i++;
//     }
//     // removing duplicate element from the string
//     // int j = 0;
//     // for (int i = 1; i < sizeof(str) / sizeof(str[0]); i++)
//     // {
//     //     if (vowel[i] != vowel[j])
//     //     {
//     //         j++;
//     //         vowel[j] = vowel[i];
//     //     }
//     // }
//     // vowel[j+1] = '\0';

//     vowel[i] = '\0';
//     return vowel;
// }
int main()
{
    // Write C++ code here

    char str[] = "whereabouts";
    char vowel[20];
    int i = 0, j = 0;
    for( i=0;i<(sizeof(str)/sizeof(str[0]));i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            if(i==0)
            {
                vowel[j]='V';
                j++;
            }
            else if(vowel[j-1]!='V')
            {
                vowel[j]='V';
                j++;
            }
        }
        else
        {
            if(i==0)
            {
                vowel[j]='C';
                j++;
            }
            else if(vowel[j-1]!='C')
            {
                vowel[j]='C';
                j++;
            }
        }
    }
    vowel[j]='\0';
    cout<<j<<"\n" << endl;
    //vowel[j] = '\0';
    i = 0;
    // while (vowel[i] != '\0')
    // {
    //     cout << i << " " << vowel[i] << endl;
    //     i++;
    // }'
    cout << vowel << endl;

    return 0;
}