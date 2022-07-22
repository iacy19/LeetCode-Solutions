class Solution {
public:

int longestConsecutive(vector<int>& nums) 
{

    //01 if vector is empty
    if(nums.size() == 0 )
        return 0;
    
    //02 sort vector elements
    sort(nums.begin(),nums.end());
    
    int MaxCount = 1, count=1;
    int Currele = nums[0]; // 03 take 1st ele of vector as Current Element

    
    //04 check conditions
    for(int i = 1;i < nums.size();i++)
    {
        if(nums[i] == Currele+1) // if numbers are in sequence 
        {
            count++;  // increase count
        }
        else if(nums[i] != Currele) // if not
        {
            count = 1;
        }
        
        Currele = nums[i]; // update Currele value 
        
        MaxCount= max(MaxCount, count); // max number in sequence
    }
    
    return MaxCount; 
   
}
};