/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    if(!headA || !headB) return NULL;

  
    struct ListNode* intersection = NULL;

    
    while(true) {
        struct ListNode* currA = headA;
        struct ListNode* currB = headB;

        if(headA == intersection) break;
        if(headB == intersection) break;


        while((currA->next != intersection) || (currB->next != intersection)) {
            currA = ((currA->next != intersection)) ? currA->next : currA;
            currB = ((currB->next != intersection)) ? currB->next : currB;

            if((currB == intersection) || (currA == intersection)) break;
        }
        
        if(currA != currB) break;
        
        intersection = currA;

    }

    return intersection;

}