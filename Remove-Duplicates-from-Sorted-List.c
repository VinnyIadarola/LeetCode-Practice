/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head == NULL) return head;

    struct ListNode* currNode   = head;
    struct ListNode* lastUnique = head;

    while(currNode->next != NULL) {
        currNode = currNode->next;
        
        if(currNode->val != lastUnique->val) {
            lastUnique->next = currNode;
            lastUnique = currNode;
        }
    }

    lastUnique->next = NULL;

    return head;
}   
