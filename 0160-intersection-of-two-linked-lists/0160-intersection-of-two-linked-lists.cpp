/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        while (headA != nullptr) {
            ListNode* temp = headB;
            while (temp != nullptr) {

                if (temp == headA) {
                    return temp;
                }
                temp = temp->next;
            }

            headA = headA->next;
        }
        return nullptr;
    }
};