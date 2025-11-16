/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {

    while(head && (head->val == val)) {
        head = head->next;
    }

    if(!head) return NULL;
    if(!head->next) return head;

    

    struct ListNode* prev = head;   
    struct ListNode* curr = head->next;
    
    while(curr) {
        while(curr->val == val) {
                curr = curr->next;
                if(!curr) break;
        }

        
        prev->next = curr;
        prev = curr;
        if(!curr) return head;
        curr = curr->next;

    }
        
    return head;
}