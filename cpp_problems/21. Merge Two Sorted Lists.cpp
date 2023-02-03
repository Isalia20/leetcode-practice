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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy_node=new ListNode(-1);
        ListNode* dummy_node_return = dummy_node;

        while (list1 != NULL and list2 != NULL){
            if (list1 -> val <= list2 -> val){
                dummy_node -> next = list1;
                list1 = list1 -> next;
            } else {
                dummy_node -> next = list2;
                list2 = list2 -> next;
            }
            dummy_node = dummy_node -> next;
        }

        if (list2 != NULL){
            dummy_node -> next = list2;
        } else if (list1 != NULL){
            dummy_node -> next = list1;
        }

        return dummy_node_return -> next;
    }
};
