#include <iostream>
using namespace std;
int main()
{
  int tc, i, hrs;
  cout << "Enter the number of Test Cases!!!" << endl;
  cin >> tc;

  while (tc > 0)
  {
    cout << "Enter the number of piles" << endl;
    cin >> i;
    cout << "Enter the Hours" << endl;
    cin >> hrs;

    int arr[i], size, temp, max = 0;
    cout << "Now Enter the number of bananas in each pile" << endl;
    for (int nob = 0; nob < i; nob++)
    {
      cin >> arr[nob];
      // if (arr[nob] > max)
      // {
      //   max = arr[i]; // maximum number of banana in which pile
      // }
      // max += arr[nob];
    }

    // sorting the array
     for(int nob=0;nob<i;nob++)
      {
           for(int nob1=0;nob1<i;nob1++)
           {
             if(arr[nob]<arr[nob1])
             {
                  int temp=arr[nob];
                  arr[nob]=arr[nob1];
                  arr[nob1]=temp;
             }
           }
     }

       temp = (arr[0] + arr[i - 1]) / 2;
       

    for(int nob=0;nob<i;nob++)
      {
        if(arr[nob]>temp)
        {
          if((nob-hrs)==0)
          {
            temp++;
          }
        }
      }
      cout << "\nValue of K " << temp << endl;
    // size=sizeof(arr)/sizeof(arr[0]);
   


    // int numberofEb = 0, numberofOb = 0;
    // for (int a = 0; a < 10; a++)
    // {
    //   // if ((a == hrs) || (max == 0))
    //   // {
    //   //   break;
    //   // }
    //   // else
    //   // {
    //   //   // numberofOb+=arr[i];
    //   //   // numberofOb-=arr[i] ;
    //   //   if (arr[a] > hrs)
    //   //   {
    //   //     max-=hrs;
    //   //     max = max + (arr[a]-hrs);
    //   //     numberofEb++;
    //   //   }
    //   //   else
    //   //   {
    //   //     max -= arr[a];
    //   //     numberofEb++;
    //   //   }
    //   int c = 0;

    //   while (c > 10)
    //   {
    //     if (arr[c] > hrs)
    //     {
    //       // numberofOb+=arr[c];
    //       numberofOb = numberofOb + (arr[c] - hrs);
    //     }
    //     else if (arr[c] <= hrs)
    //     {
    //       numberofOb = (hrs + numberofOb) - arr[c];
    //     }
    //     else{

    //     }

    //     c++;
    //   }
    // }

    // cout << "\nValue of K " << numberofEb << endl;
    // numberofEb = 0;
    tc--;
  }
  return 0;
}
