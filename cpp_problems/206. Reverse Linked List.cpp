/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* revList(ListNode* cur, ListNode* prev){
        if (cur == NULL){
            return prev;
        }
        ListNode* next = cur -> next;
        cur -> next = prev;
        return revList(next, cur);
    }

    ListNode* reverseList(ListNode* head) {
        return revList(head, NULL);
    }
};
