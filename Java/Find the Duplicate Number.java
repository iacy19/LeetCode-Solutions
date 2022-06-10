class Solution {
    
    public int findDuplicate(int[] nums) 
    {
        int index=0;
        int curr=0;
        
        while(true)
        {
            if(curr==nums[index])
            return curr;
            int next=nums[index];
            nums[index]=curr;
            index=next;
            curr=next;
        }
    }
}