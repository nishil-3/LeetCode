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
    bool isPalindrome(ListNode* head) {
        vector <int> ans ;
        ListNode* temp = head ;
        while (temp != nullptr)
        {
            ans.push_back(temp-> val);
            temp = temp -> next ;
        }
        // now we will reverse the linkedlist ;
        ListNode* prev = nullptr ;
        temp = head ;
        while (temp != nullptr)
        {
            ListNode* forward = temp -> next ;
            temp-> next = prev;
            prev = temp ;
           temp = forward ;
        }
        vector <int> ans1;
        while (prev != nullptr)
        {
            ans1.push_back(prev-> val);
            prev = prev -> next ;
        }
        for(int i =0;i<ans1.size();i++)
        {
            if (ans[i]!=ans1[i])
            {
                return false ;
            }
        }
        return true ;


        
    }
};