class Solution {
public:
    double findMedianSortedArrays(vector<int>& vec1, vector<int>& vec2) 
    {
        double med=0;
        vector<double>MergeVec;
        
        //vector_name.insert (position, val)
        MergeVec.insert(MergeVec.begin(),vec1.begin(),vec1.end());
        MergeVec.insert(MergeVec.end(), vec2.begin(),vec2.end());
         
        sort(MergeVec.begin(),MergeVec.end());
            
        int n=MergeVec.size();  
        
        if(n%2==0)
        {
            med= ((MergeVec[n/2]+MergeVec[(n/2)-1])/2);
        }
        else
        {
            med=MergeVec[n/2];
        }
        
        
     return med;   
    }
};