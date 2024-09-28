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
    ListNode* oddEvenList(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;
        if(head == nullptr || head ->next == nullptr)
        {
            return head ;
        }

        // this is for the odd value 
        while(temp!=nullptr && temp-> next != nullptr)
        {
            arr.push_back(temp-> val);
            temp= temp-> next -> next ;
        }
        if(temp) arr.push_back(temp-> val);

        temp = head -> next;

         while(temp!=nullptr && temp-> next != nullptr)
        {
            arr.push_back(temp-> val);
            temp= temp-> next -> next ;
        }
        if(temp) arr.push_back(temp-> val);
        // this is for the even value 

        temp = head ;
        int i =0;

        while (temp!=nullptr)
        {
            temp -> val = arr[i];
            temp = temp-> next;
            i++;
        }
        return head ;


        
    }
};