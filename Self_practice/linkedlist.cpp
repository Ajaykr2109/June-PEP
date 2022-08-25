//reverse linked list in o(n) time and o(1) space
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node *head = NULL;
void push(int data){
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}
void printList(){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void reverseList(){
    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

int main()
{
    cout<<"Enter the elements of the linked list: ";
    int data;
    while(cin>>data){
        push(data);
    }
    printList();
    reverseList();
    cout<<"Reversed linked list: ";
    printList();
    return 0;
    
}