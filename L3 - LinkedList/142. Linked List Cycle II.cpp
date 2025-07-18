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

        ListNode * slowRunner = head;
        ListNode * fastRunner = head;

        while(fastRunner != nullptr && fastRunner->next != nullptr){
            slowRunner = slowRunner->next;
            fastRunner = fastRunner->next;
            fastRunner = fastRunner->next;

            // when slow and fast pointer,both meet
            // slow set with head
            // run both pointer same speed until they both are gonna to meet again 
            if(slowRunner == fastRunner){
                slowRunner = head;
                while(slowRunner != fastRunner){
                     slowRunner = slowRunner->next;
                     fastRunner = fastRunner->next;
                }
                return slowRunner;
            }
        }
    //  It is -1 if there is no cycle. Note that pos is not passed as a parameter.
      return nullptr;
    }
};