// class Solution{


// void LargetSmall( int arr[],int l)
// {
//     //elements at even place no swap
//     int i = 0;
//     int even[l];
//     int odd[l];
//     while(i<l)
//     {
//         if(i%2==0)
//         {
//             even[i]=arr[i];
//             //sorting the array
//             if(even[i]>even[i+1])
//             {
//                 int temp = even[i];
//                 even[i]=even[i+1];
//                 even[i+1]=temp;
//             }
//         }
//         else
//         {
//             odd[i]=arr[i];
//             if(odd[i]>odd[i+])
//             {
//                 int temp = odd[i];
//                 odd[i]=odd[i+1];
//                 odd[i+1]=temp;
//             }
//         }
//         i++;

//         int s1=sizeof(even)/sizeof(even[0]);
        
        
//     }
// }

// };
// int main(){
//     Solution s;
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int l = sizeof(arr)/sizeof(arr[0]);
//     s.LargetSmall(arr,l);
//     for(int i=0;i<l;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

    
 
 
//     return 0;
// }

#include<stdio.h>

    class p
    {public:
        int x;
        char y;
    };
    int main()
    {
      class p p1[]={1,92,3,94,5,96};
     class p *ptr1=p1;
        // int x =(sizeof(p1)/sizeof(struct p));
        // printf("%d %d\n",ptr1->x,(ptr1+x-1)->x);
        int x =(sizeof(p1)/3);
        if(x==sizeof(int)+sizeof(char))
        {
            printf("%d %d\n",ptr1->x);
        }
        else
        {
            printf("Flase");
        }
    }
