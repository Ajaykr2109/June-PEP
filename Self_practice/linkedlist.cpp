#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class list
{
    int data;
    class list *next;

    void insertList(class list **head, int data, int position)
    {
        int k = 1;
        class list *p, *q, *newnode;
        newnode = new node;
        if (!newnode)
        {
            cout << "Memory Error!!";
        }

        newnode->data = data;
        p = *head;
        if (position == 1) // insertionat the beginning
        {
            newnode->next = p;
            *head = newnode;
        }
    }

    int listLength(class list *head)
    {
        class list *current=head;
        int count=0;

        while(current!=NULL)
        {
            count++;
            current=crrent->next;
        }

        return count;

    }
};

int main()
{
    while()

        return 0;
}