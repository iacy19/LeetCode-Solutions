
//1. Two Sum ( ARRAY)- USING BRUTE FORCE METHOD) 

class Solution {
    
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int>input;
        
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=i+1; j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    input.push_back(i);
                    input.push_back(j);
                       break;
                }
            }
        }
        return input;
    }
};