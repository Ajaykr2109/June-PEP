//linear data structure/ follows lifo/ 
//stack is a last in first out data structure
//stack is a linear data structure
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// class Stack
// {
//     public:
//     int top;
//     int capacity;
//     int *array;
//     Stack(int capacity)
//     {
//         this->capacity = capacity;
//         top = -1;
//         array = new int[capacity];
//     }
//     void push(int item)
//     {
//         if(top == capacity - 1)
//         {
//             cout<<"Stack Overflow"<<endl;
//             return;
//         }
//         array[++top] = item;
//     }
//     int pop()
//     {
//         if(top == -1)
//         {
//             cout<<"Stack Underflow"<<endl;
//             return INT_MIN;
//         }
//         return array[top--];
//     }
//     int peek()//returns top element
//     {
//         if(top == -1)
//         {
//             cout<<"Stack Underflow"<<endl;
//             return INT_MIN;
//         }
//         return array[top];
//     }
//     bool isEmpty()
//     {
//         return top == -1;
//     }
//     bool isFull()
//     {
//         return top == capacity - 1;
//     }
// };

//---------------------------------------------------------------------------------------------------------------------
//using linked list
class Stack
{
    public:
    int top;
    int capacity;
    struct Node
    {
        int data;
        Node *next;
    };
    Node *head;
    Stack(int capacity)
    {
        this->capacity = capacity;
        top = -1;
        head = NULL;
    }
    void push(int item)
    {
        if(top == capacity - 1)
        {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        Node *newNode = new Node;
        newNode->data = item;
        newNode->next = head;
        head = newNode;
        top++;
    }
    int pop()
    {
        if(top == -1)
        {
            cout<<"Stack Underflow"<<endl;
            return INT_MIN;
        }
        Node *temp = head;
        head = head->next;
        top--;
        return temp->data;
    }
    int peek()//returns top element
    {
        if(top == -1)
        {
            cout<<"Stack Underflow"<<endl;
            return INT_MIN;
        }
        return head->data;
    }
    bool isEmpty()
    {
        return top == -1;
        //reuturn size == 0;
    }
    bool isFull()
    {
        return top == capacity - 1;
    }
};
int main()
{
    Stack *s = new Stack(5);
    s->push(1);
    s->push(2);
    s->push(3);
    s->push(4);
    s->push(5);
    s->push(6);
    s->push(7);
    s->push(8);
    s->push(9);
    
    while(!s->isEmpty())
    {
        cout<<s->pop()<<" ";
    }

    reutrn 0;
}


//balanced string
#include<iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;

bool check(string str){

    Stack *s = new Stack(str.length());
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '('){
            s->push(str[i]);
        }
        else if(str[i] == ')'){
            if(s->isEmpty()){
                return false;
            }
            else{
                s->pop();
            }
        }
    }
    if(s->isEmpty()){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    string str;
    cin>>str;
    if(check(str))
    {
        cout<<"Balanced";
    }
    else
    {
        cout<<"Not Balanced";
    }
    return 0;
}


