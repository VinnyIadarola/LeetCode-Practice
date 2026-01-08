1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* reverseList(ListNode* head) {
14        if(head == nullptr || head->next == nullptr) return head;
15        ListNode *prev = nullptr, *curr = head, *next = head->next;
16
17        while(curr != nullptr) {
18            curr->next = prev;
19            prev = curr;
20
21            curr = next;
22
23
24            if(next == nullptr) break;
25            next = next->next;
26        }
27
28        return (curr == nullptr) ? prev : curr;
29        
30    }
31};