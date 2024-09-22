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

int leng(ListNode* head) {
    int cnt = 0;

    ListNode * temp = head;
    while (temp != NULL) {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        int length = leng(head);

        ListNode* node1 = head;
        int cnt = 0;
  
            length = ((length / 2));
    

        while (cnt < length) {
            node1 = node1->next;
            cnt++;

        }
        return node1;
    }
};