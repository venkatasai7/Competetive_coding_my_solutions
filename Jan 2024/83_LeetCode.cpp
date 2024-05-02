// 83. Remove Duplicates from Sorted List

// https://leetcode.com/problems/remove-duplicates-from-sorted-list/



class Solution {
public:
    

    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* temp = head;

        while(temp!=NULL)
        {
            if(temp->next != NULL)
            {
                if(temp ->val == temp->next->val)
                {
                    
                    temp-> next = temp->next->next;
                }
                else
                {
                    temp = temp->next;
                }
            }
             else
                {
                    temp = temp->next;
                }

        }
        return head;
    }
};