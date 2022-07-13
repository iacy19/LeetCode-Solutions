
class Solution 
{
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2)
    {
      while(head2 != NULL) 
      
      {
        ListNode* temp = head1;
          
        while(temp != NULL)
        {
            //if both nodes are same
            if(temp == head2) 
                return head2;
            else
                
            temp = temp->next;
        }
        head2 = head2->next;
    }
    //intersection is not present between the lists return null
    return NULL;
        
    }
      
};