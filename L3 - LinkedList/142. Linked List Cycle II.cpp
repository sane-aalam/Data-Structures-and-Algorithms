//  * Definition for singly-linked list.

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        // Edge Case - you must checked this condition,
        // may your linked list is Empty 
        if(head == nullptr) 
            return nullptr;

        ListNode * slow_pointer = head;
        ListNode * fast_pointer = head;

        while(fast_pointer != nullptr && fast_pointer->next != nullptr){
            slow_pointer = slow_pointer->next;
            fast_pointer = fast_pointer->next;
            fast_pointer = fast_pointer->next;

            if(slow_pointer == fast_pointer){
                slow_pointer = head;
                while(slow_pointer != fast_pointer){
                     slow_pointer = slow_pointer->next;
                     fast_pointer = fast_pointer->next;
                }
                return slow_pointer;
            }
        }
    //  It is -1 if there is no cycle. Note that pos is not passed as a parameter.
      return nullptr;
    }
};