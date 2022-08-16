// // //middle element of a linked list
// #include <iostream>
// using namespace std;
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *newNode(int data)
// {
//     struct node *temp = new struct node;
//     temp->data = data;
//     temp->next = NULL;
//     return temp;
// }
// void printList(struct node *head)
// {
//     struct node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }
// int getMiddle(struct node *head)
// {
//     struct node *slow = head;
//     struct node *fast = head;
//     while (fast != NULL && fast->next != NULL)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     return slow->data;
// }

// // minimum out of array in O(n) time
// #include <iostream>
// using namespace std;

// int minM(int a, int b)
// {
//     return a < b ? a : b;
// }
// int minOfArray(int arr[], int n)
// {
//     int min = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         min = minM(min, arr[i]);
//     }
//     return min;
// }
// int main()
// {
//     int arr[] = {10, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << minOfArray(arr, n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int MissingMarbles(int number, int[] bowls)
// {
//     int sum = bowls[0] + bowls[number - 1];
//     int missing = 0;
//     int i = 1, j = number - 2;
//     while (i <= j)
//     {
//         if (bowls[i] + bowls[j] == sum)
//         {
//             i++;
//             j = j - 1;
//         }
//         else
//         {
//             if (i == j)
//             {
//                 missing = sum - bowls[i];
//             }
//             else
//             {
//                 missing = (sum - (bowls[i] + bowls[j]));
//                 break;
//             }
//         }
//     }
//     return missing;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int bowls[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> bowls[i];
//     }
//     int missing = MissingMarbles(n, bowls);
//     cout << missing;
//     return 0;
// }

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
    cout << reduction(n); 
    return 0; 
}