// 1171. Remove Zero Sum Consecutive Nodes from Linked List
// https://leetcode.com/problems/remove-zero-sum-consecutive-nodes-from-linked-list/?envType=daily-question&envId=2024-03-12
class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
               //ios::sync_with_stdio(0);

       map<int,ListNode* > m;
        int psum =0;
    ListNode*  temp = new ListNode(0);
    temp->next = head;
    m[psum] = temp;
    while(head!=NULL)
    {
        psum+=head->val;
        if(m.find(psum)!= m.end())
        {
            int sum = psum;

            ListNode* x = m[psum];
            ListNode* x2 = x->next;
            while(x2!=head)
            {
                sum += x2->val;
                m.erase(sum);
                x2=x2->next;
            }
            x->next = head->next;
        }
        else
        {
            m[psum]=head;
        }


        head= head->next;
    }


    return temp->next;

    }   
};
