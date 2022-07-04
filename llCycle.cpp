//Linked List Cycle
//Given a linked list, determine if it has a cycle in it.
// //hashmap
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {

        // if(head == NULL)
        //     return false;
        
        // ListNode *slow = head;
        // ListNode *fast = head;
        
        // while(fast->next != NULL && fast->next->next != NULL)
        // {
        //     slow = slow->next;
        //     fast = fast->next->next;
            
        //     if(slow == fast)
        //         return true;
        // }
        
        // return false;        

//     }
// };
//using hashmap
//  class Solution {
//     public:
//         bool hasCycle(ListNode *head) {
//             if(head == NULL)
//                 return false;
//             unordered_map<ListNode*, bool> m;
//             while(head != NULL)
//             {
//                 if(m.find(head) != m.end())//if the node is already present in the map
//                     return true;
//                 m[head] = true; //mark the node as visited
//                 head = head->next;
//             }
//             return false;
//         }
//     };

//Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
#include<iosteam>
using namespace std;
// class Solution
// {
// public:
//     ListNode* deleteDuplicates(ListNode* head)
//     {
//         if(head == NULL)
//             return NULL;
//         ListNode *curr = head;
//         while(curr->next != NULL)
//         {
//             if(curr->val == curr->next->val)
//             {
//                 ListNode *temp = curr->next;
//                 curr->next = curr->next->next;
//                 delete temp;
//             }
//             else
//                 curr = curr->next;
//         }
//         return head;
//     }
// };



