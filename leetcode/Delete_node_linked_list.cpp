/*
Input: head = [4,5,1,9], node = 5
Output: [4,1,9]
Explanation: You are given the second node with value 5, the linked list should become 4 -> 1 -> 9 after calling your function.
*/

class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp = node -> next; // store the addess of node's next node
        node->val = temp->val;     // update the value of node which have to delete
        node->next= temp->next;    // update the address
        delete temp;
    }
};
