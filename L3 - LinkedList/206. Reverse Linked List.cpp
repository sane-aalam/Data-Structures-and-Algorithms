
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
    ListNode* reverseList(ListNode* head) {
    
    // DRY RUN
    // Make it fun 
        if(head == nullptr){
            return nullptr;
        }

        ListNode * prevNode = nullptr;
        ListNode * currentNode = head;
        ListNode * forwardNode = nullptr;

        while(currentNode != nullptr){
             forwardNode = currentNode->next;
             currentNode->next = prevNode;
             prevNode = currentNode;
             currentNode = forwardNode;
        }
        return prevNode;
    }
};