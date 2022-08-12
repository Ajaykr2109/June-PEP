#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// malloc allocates uninitialized memory. The allocated memory has to be released with free.
// calloc is like malloc but initializes the allocated memory with a constant (0). It needs to be freed with free.
// new initializes the allocated memory by calling the constructor (if it's an object). Memory allocated with new should be released with delete (which in turn calls the destructor).
class list
{
    cout<<"Hello"<<std::endl;
    int data;
    list *next;

    void insertList(class list **head, int data, int position)
    {
        int k = 1;
        class list *p, *q, *newnode;
        newnode = new newnode;
        if (!newnode)
        {
            cout << "Memory Error!!";
        }

        newnode->data = data;
        p = *head;
        if (position == 1) // insertion at the beginning
        {
            newnode->next = p;
            *head = newnode;
        }
    }

    int listLength(class list *head) // counting the elements while travering
    {
        class list *current = head;
        int count = 0;

        while (current != NULL)
        {
            count++;
            current = crrent->next;
        }

        return count;
    }
};

int main()
{
    while ()

        return 0;
}