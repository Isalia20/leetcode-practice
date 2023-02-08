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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* return_node = new ListNode(-1 , head);
        ListNode* head_1 = head;
        ListNode* head_2 = new ListNode(-1, head);
        int counter = 0;

        if (head -> next == NULL){
            return NULL;
        }

        // count number of lists
        while (head != NULL){
            head = head -> next;
            counter++;
        }

        int remove_node_index = counter - n;

        if (remove_node_index == 0){
            return head_2 -> next -> next;
        }

        for (int i = 0; i < remove_node_index; i++){
            head_1 = head_1 -> next;
            head_2 = head_2 -> next;
        }
        head_1 = head_1 -> next;
        head_2 -> next = head_1;
        return return_node -> next;
    }
};
