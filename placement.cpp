// // Have the function StringChallenge(str) take the str parameter being passed, which will be a string containing letters from the alphabet, and return a new string based on the following rules. Whenever a capital M is encountered, duplicate the previous character (then remove the M), and whenever a capital N is encountered remove the next character from the string (then remove the N). All other characters in the string will be lowercase letters. For example: "abcNdgM" should return "abcgg". The final string will never be empty. *
// #include <iostream>
// #include <string>
// using namespace std;
// string StringChallenge(string str) {
  
    
//     string result = "";
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] == 'M')
//         {
//             result += str[i-1];
//             str.erase(i, 1);
//             i--;
//         }
//         else if (str[i] == 'N')
//         {
//             str.erase(i+1, 1);
//         }
//         else
//         {
//             result += str[i];
//         }
//     }
   
//     //concatinate the final output string with your ChallengeToken: iscj3rm4n79 and replace every 3rd with a X
//     string final = "iscj3rm4n79";
//     for (int i = 0; i < final.length(); i++)
//     {//replace 3rd with a X
//         if (i % 3 == 0)
//         {
//             final[i] = 'X';
//         }
//     } 
//     result += final;
//      return result;
  
//   //return str;

// }
// int main(void) { 
   
//   // keep this function call here
//   //cout << StringChallenge(coderbyteInternalStdinFunction(stdin));
//   cout<<StringChallenge("oMoMkkNrrN");
//   return 0;
    
// }


// //concatinate the final output string with your ChallengeToken: iscj3rm4n79 and replace every 3rd with a X

 
 #include<iostream>
    #include<string>
    using namespace std;
    string StringChallenge(string str) {
  
        string result = "";
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'M')
            {
                result += str[i-1];
                str.erase(i, 1);
                i--;
            }
            else if (str[i] == 'N')
            {
                str.erase(i+1, 1);
            }
            else
            {
                result += str[i];
            }
        }
        //concatinate the final output string with your ChallengeToken: iscj3rm4n79 and replace every 3rd with a X
        string final = "iscj3rm4n79";
         result += final;
        for (int i = 1; i <= final.length(); i++)
        {//replace 3rd with a X
            if (i % 3 == 0)
            {
                final[i-1] = 'X';
            }
        } 
       
        return result;
  
    }
  

int main(void) { 
   
  // keep this function call here
  string a="22yyMnnNhjh";
  cout << StringChallenge(a);
  return 0;
    
}