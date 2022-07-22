class Solution
{
public:

vector<int> majorityElement(vector<int>& nums)
{
    vector < int >v; // declare vector 
    int n=nums.size(); // n= total size of vector
    unordered_map < int, int > map;  // < number, occurence>
    
    // put vec ele into map
    for (int i = 0; i < n; i++) 
    {
        map[nums[i]]++;
    }
    
   // check conditions and return vector
   for (auto i: map) 
   {
     if (i.second > (n / 3)) // if occurence > n/3
      v.push_back(i.first);   // than push_back that number
   }

      return v;

}
};