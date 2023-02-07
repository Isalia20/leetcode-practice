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
    ListNode* reverseLinkedList(ListNode* cur, ListNode* prev){
        if (cur == NULL){
            return prev;
        }
        ListNode* next = cur -> next;
        cur -> next = prev;
        return reverseLinkedList(next, cur);
    }

    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head -> next;

        while (fast != NULL and fast -> next != NULL){
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        
        ListNode* second = slow -> next;
        // this is important to break the link from 2->3;
        slow -> next = NULL;
        // reverse the other half 
        second = reverseLinkedList(second, NULL);
        
        // merge two halves 
        ListNode* first = head;
        while (second != NULL){
            ListNode* temp_1 = first -> next;
            ListNode* temp_2 = second -> next;
            
            first -> next = second;
            second -> next = temp_1;
            
            first = temp_1;
            second = temp_2;
        }
    }
};
