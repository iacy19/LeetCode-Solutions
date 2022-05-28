class Solution {
public:
    int subarraysDivByK(vector<int>& Vec, int k) {
        
        int TotalSubArray=0, n=Vec.size(), Sum=0, Rem=0;
        
        unordered_map<int,int>map;
        map[0]=1;
        
        for(int i=0; i<n;i++)
        {
            Sum+=Vec[i]; // add vec ele
            Rem=Sum%k;  // find reminder
            
            // base case 0 for negative reminder
            
            if(Rem<0)
            {
                Rem+=k;   // just add k value for positive reminder
            }
            
            // iterator=map_name.find(key)
            
            if(map.find(Rem)!=map.end())  // Check Reminder frequency 
            {
                // that's mean frequency >1 
                // add total no of frequency into totalsubarray
                   TotalSubArray+=map[Rem];
            }
            
            map[Rem]++;   
                        
            
        }      
        
        return TotalSubArray; 
        
        
    }
};