// // class Solution{


// // void LargetSmall( int arr[],int l)
// // {
// //     //elements at even place no swap
// //     int i = 0;
// //     int even[l];
// //     int odd[l];
// //     while(i<l)
// //     {
// //         if(i%2==0)
// //         {
// //             even[i]=arr[i];
// //             //sorting the array
// //             if(even[i]>even[i+1])
// //             {
// //                 int temp = even[i];
// //                 even[i]=even[i+1];
// //                 even[i+1]=temp;
// //             }
// //         }
// //         else
// //         {
// //             odd[i]=arr[i];
// //             if(odd[i]>odd[i+])
// //             {
// //                 int temp = odd[i];
// //                 odd[i]=odd[i+1];
// //                 odd[i+1]=temp;
// //             }
// //         }
// //         i++;

// //         int s1=sizeof(even)/sizeof(even[0]);
        
        
// //     }
// // }

// // };
// // int main(){
// //     Solution s;
// //     int arr[] = {1,2,3,4,5,6,7,8,9,10};
// //     int l = sizeof(arr)/sizeof(arr[0]);
// //     s.LargetSmall(arr,l);
// //     for(int i=0;i<l;i++)
// //     {
// //         cout<<arr[i]<<" ";
// //     }

    
 
 
// //     return 0;
// // }

// #include<stdio.h>

//     class p
//     {public:
//         int x;
//         char y;
//     };
//     int main()
//     {
//       class p p1[]={1,92,3,94,5,96};
//      class p *ptr1=p1;
//         // int x =(sizeof(p1)/sizeof(struct p));
//         // printf("%d %d\n",ptr1->x,(ptr1+x-1)->x);
//         int x =(sizeof(p1)/3);
//         if(x==sizeof(int)+sizeof(char))
//         {
//             printf("%d %d\n",ptr1->x);
//         }
//         else
//         {
//             printf("Flase");
//         }
//     }

//    //validate binary tree
//     class Solution {

// public:
//     bool isValidBST(TreeNode* root) {
//         if(root==NULL)
//         {
//             return true;
//         }
//         if(root->left==NULL && root->right==NULL)
//         {
//             return true;
//         }
//         if(root->left==NULL)
//         {
//             if(root->val<root->right->val)
//             {
//                 return isValidBST(root->right);
//             }
//             else
//             {
//                 return false;
//             }
//         }
//         if(root->right==NULL)
//         {
//             if(root->val>root->left->val)
//             {
//                 return isValidBST(root->left);
//             }
//             else
//             {
//                 return false;
//             }
//         }
//         if(root->val>root->left->val && root->val<root->right->val)
//         {
//             return isValidBST(root->left) && isValidBST(root->right);
//         }
//         else
//         {
//             return false;
//         }     

//     }
// };
// int main()
// {
//     Solution s;
//     TreeNode *root = new TreeNode(1);
//     root->left = new TreeNode(1);
//     root->right = new TreeNode(1);
//     root->left->left = new TreeNode(1);
//     root->left->right = new TreeNode(1);
//     root->right->left = new TreeNode(1);
//     root->right->right = new TreeNode(1);
//     cout<<s.isValidBST(root);
//     return 0;
// }
// //https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
// //https://leetcode.com/problems/two-sum-iv-input-is-a-bst/
// #include <iostream>
// #include <vector>
// using namespace std;
// int funn(int p=6, int q=27)
// {
    
//     // if (p > 0)
//     // {
        
//     //    // cout<<p + q + funn(p - 3, q) + funn(p - 8, q - 2)<<endl;
//     //     return p + q + funn(p - 3, q) + funn(p - 8, q - 2);
//     // }
//     // else
//     // {
//     //     return q - 2;
//     // }
    
//     int a=7,b=7,c=7;
//     if(7-b-c) cout<<"Hello";
//     else cout<<"World";

//     return 0;
// }
// //recursive factorial
// int fact(int n)
// {
//     if(n==0)
//     {
//         return 1;
//     }
//     else
//     {
//         return n*fact(n-1);
//     }
// }

//minimum numbere of steps to reduce a number to one 
#include<iostream>
using namespace std;
// int minSteps(int n)
// {
//     if(n==1)
//     {
//         return 0;
//     }
//     else
//     {
//         int count=0;
//         for(int i=2;i<=n;i++)
//         {
//             if(n%i==0)
//             {
//                 count++;
//                 n=n/i;
//                 i=1;
//             }
//         }
//         return count+minSteps(n);
//     }
// }
int main()
{
    // int n;
    // cin>>n;
    // cout<<minSteps(n);
    // return 0;
    int a[4]={10,11,3,2};
    for(int j=0;j<0+3;j++)
    {
        if(j>0)
        a[j]=a[j-1]+2;
    }
    cout<<a[0]+a[1]+a[2];
}