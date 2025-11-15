/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if(list2 == NULL) 
        return list1;
    if(list1 == NULL) 
        return list2;

    struct ListNode *head1 = list1, *head2 = list2, *list3 = NULL, *head3 = NULL;

    if(head1->val >= head2->val) {
        list3 = head2;
        head2 = head2->next;
    } else {
        list3 = head1;
        head1 = head1->next;

    }
    
    head3 = list3;

    while((head1 != NULL) && (head2 != NULL)) {
        if(head1->val >= head2->val) {
            head3->next = head2;

            head3 = head3->next;
            head2 = head2->next;
        } else {
            head3->next = head1;

            head3 = head3->next;
            head1 = head1->next;
        }
    }

        if (head1 != NULL) {
            head3->next = head1;
        } else if (head2 != NULL) {
            head3->next = head2;
        }

        return list3;

 
    

}