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
    ListNode* detectCycle(ListNode* head) {
        ListNode* temp = head;
        map<ListNode*, int> mpp;
        while (temp != nullptr) {
            if (mpp.count(temp) != 0) {
                return temp;
            }
            mpp[temp]++;
            temp = temp->next;
        }
        return nullptr;
    }
};