

//  * Definition for singly-linked list.

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 

// 1. pick the current given node, Then swap with next node
// 2. connect with next node 
// 3. delete the (give node)

class Solution {
public:
    void deleteNode(ListNode* node) {
        if(node == nullptr){
            return;
        }

        // swapping is performing 
        swap(node->val,node->next->val);

        ListNode * deleteNode = node->next;

        // connect the next node and delete the (free node into memeory)
        node->next = node->next->next;
        delete deleteNode;
    }
};

