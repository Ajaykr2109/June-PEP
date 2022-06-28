#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class LN
{
public:
    int data;
    LN *next;
    LN(int d)
    {
        data = d;
        next = NULL;
    }
};
LN *makeLL()
{
    int d;
    LN *head = NULL;
    LN *tail = NULL;

    while (d != -1)
    {
        LN *node = new LN(d);
        if (head == NULL)
        {
            head = node;
            tail = node;
        }
        else
        {
            tail->next = node;
            tail = node;
        }

        cout << "Enter the data: " << endl;
        cin >> d;
    }
    return head;
}
void printLL(LN *hed)
{
    // LN *head = makeLL();
    // LN *current = hed;
    // while (current != NULL)
    // {
    //     cout << current->data << " ";
    //     current = current->next;
    // }
    // cout << endl;
    // return head;

    if (!hed)
        return;
    else
    {
        LN *temp = hed;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "Null PTR" << endl;
        return;
    }
}

// int  length(LN *head)
// {
//     int count = 0;
//     LN *current = head;
//     while (current != NULL)
//     {
//         count++;
//         current = current->next;
//     }
//     return count;
//}

int length(LN* head)
{//recursive length
    if (head == NULL)
        return 0;
    else
        return 1 + length(head->next);

}
LN reverse(LN* head)
{//recursive reverse
    if (head == NULL)
        return 0;
    else
    {
        LN* temp = head->next;
        head->next = NULL;
        reverse(temp);
        temp->next = head;
        return 1;
    }
}


int main()
{
    LN *head = makeLL();
    printLL(head);
    //cout << "Length of the list is: " << length(head) << endl;
    reverse(head);
    printLL(head);
    return 0;
}
