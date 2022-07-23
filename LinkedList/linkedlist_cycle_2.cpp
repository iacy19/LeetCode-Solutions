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
    ListNode *detectCycle(ListNode *head) 
    {
        unordered_set<ListNode*>us;
        
        while(head!=NULL)
        {
            if(us.find(head)!=us.end())
            {
                return head;
            }
            else
            {
                us.insert(head);
                head=head->next;
            }
        }
        
        return NULL;
        
    }
};