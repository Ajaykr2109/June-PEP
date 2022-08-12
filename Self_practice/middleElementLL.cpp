// //middle element of a linked list
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *newNode(int data)
{
    struct node *temp = new struct node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}
void printList(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int getMiddle(struct node *head)
{
    struct node *slow = head;
    struct node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}

// minimum out of array in O(n) time
#include <iostream>
using namespace std;

int minM(int a, int b)
{
    return a < b ? a : b;
}
int minOfArray(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        min = minM(min, arr[i]);
    }
    return min;
}
int main()
{
    int arr[] = {10, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << minOfArray(arr, n);
    return 0;
}
