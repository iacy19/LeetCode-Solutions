class Solution {
public:

int majorityElement(vector<int>& nums) 
{ 
    //01 take two ele one for count, another for majority element
     int count = 0 , MajorityEle= 0;

    // 02 traverse whole vector 
    for (int i=0; i<nums.size(); i++) 
    {
        if (count == 0)  
        {
            MajorityEle = nums[i]; // take 1st ele as majority element, nums[0]
        }
        
        if(nums[i]==MajorityEle) // if any ele is same as majority ele
            count++;     // increase count
        else            // if different 
            count--;    // decrease count 
        
        //Note:  if again count=0 than, it will take next nums[i] value
    }

    return MajorityEle; 
     
    
}
};