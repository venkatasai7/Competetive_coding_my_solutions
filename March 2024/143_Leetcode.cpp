// 143. Reorder List
// https://leetcode.com/problems/reorder-list/description/?envType=daily-question&envId=2024-03-22

class Solution {
public:
    void reorderList(ListNode* head) {
        
        vector<int> v;

        for(ListNode* temp=head;temp!=NULL;temp=temp->next)
        {
            v.push_back(temp->val);
        }

    int i=0,j= v.size()-1;
    ListNode* temp = head;
    while(i<=j)
    {
        //cout<<v[i]<< " " <<v[j]<<endl;
        temp ->val = v[i];
        temp = temp->next;
        if(i!=j)
        {
        temp->val =v[j];
        temp =temp->next;
        }
        i++;
        j--;
    }

    }
};
