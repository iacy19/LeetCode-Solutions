class Solution {
public:
    ListNode* sortList(ListNode* head)
    {
        if(head==NULL)
            return NULL;
        
        vector<int>v;
        
        ListNode * temp=head;
        
        // enter link ele into vector
        while(temp)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        
        // sort vector
        
        sort(v.begin(), v.end());
        
        // assign sorted ele of vector to link
        
        temp=head;
        
        for(const auto  &n: v)
        {
            temp->val=n;
            temp=temp->next;
        }
        
        return head;
    }
};