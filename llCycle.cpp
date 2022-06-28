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
 class Solution {
    public:
        bool hasCycle(ListNode *head) {
            if(head == NULL)
                return false;
            unordered_map<ListNode*, bool> m;
            while(head != NULL)
            {
                if(m.find(head) != m.end())
                    return true;
                m[head] = true;
                head = head->next;
            }
            return false;
        }
    };

