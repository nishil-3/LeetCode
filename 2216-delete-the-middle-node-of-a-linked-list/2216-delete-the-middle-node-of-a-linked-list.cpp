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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr)
            return nullptr;
        if (head->next == nullptr) {
            delete head;
            return nullptr;
        }
        int cnt = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            temp = temp->next;
            cnt++;
        }
        int ans = cnt / 2;
        cnt = 0;
        temp = head;
        while (temp != nullptr) {
            cnt++;
            if (cnt == ans) {
                ListNode* forward = temp->next;
                temp->next = temp->next->next;
                delete forward;
                return head;
            }
            temp = temp->next;
        }
        return head;
    }
};