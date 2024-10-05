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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if (head == nullptr) return nullptr; 

        int cnt = 0;
        ListNode* temp = head ;
        vector <int> ans ;
        while (temp != nullptr)
        {
            ans.push_back(temp-> val);
            temp = temp -> next ;
            cnt++;
        }
        int rotation = k % cnt ;
       reverse (ans.begin(), ans.end()-rotation );
       reverse (ans.end() - rotation, ans.end() );
       reverse (ans.begin(), ans.end() );
       temp = head ;
       int i =0;
       while (temp != nullptr)
       {
        temp -> val = ans [i];
        temp = temp -> next ;
        i++;
       }
       return head ;

        
    }
};