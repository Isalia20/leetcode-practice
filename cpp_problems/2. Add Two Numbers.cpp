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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode(0, NULL);
        ListNode* return_linked_list = new ListNode(0, result);
        int save_nums = 0;

        while (l1 != NULL or l2 != NULL){
            ListNode* next_list_node = new ListNode(0, NULL);
            result -> next = next_list_node;
            result = result -> next;

            int sum_num;
            int old_sum_num;

            if (l1 == NULL){
                sum_num = l2 -> val;
            } else if (l2 == NULL){
                sum_num = l1 -> val;
            } else {
                sum_num = l1 -> val + l2 -> val;
            }
            
            old_sum_num = sum_num;
            if (save_nums > 0){
                sum_num = sum_num % 10 + save_nums;
                if (sum_num >= 10){
                    result -> val = sum_num % 10;
                    save_nums = 1;
                } else {
                    result -> val = sum_num;
                    save_nums = 0;
                }
            } else if (save_nums == 0){
                result -> val = sum_num % 10;
            }

            if (old_sum_num >= 10){
                save_nums++;
            }

            if (l1 == NULL){
                l2 = l2 -> next;
            } else if (l2 == NULL){
                l1 = l1 -> next;
            } else {
                l1 = l1 -> next;
                l2 = l2 -> next;
            }
        }
        if (save_nums > 0){
            result -> next = new ListNode(1, NULL);
        }

        // return result of the linked list
        return return_linked_list -> next -> next;
    }
};
