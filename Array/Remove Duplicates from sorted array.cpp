

class Solution {
public:
    int removeDuplicates(vector<int>& vec) 
    {
        //base case 0
        
        if(vec.size()<=1)
            return vec.size();
        
        // case 1
        
        int fe=0, se=fe+1;  // fe= first element  se= second  element
        
        
        for(int i=se; i<vec.size(); i++)   // or while(vec.size()>se)
        {
            if(vec[se]!=vec[fe])
            {
                vec[fe+1]=vec[se];         // put unique val into fe+1  
                fe++;
            }
            
            se++;   // for else case,  only increase se pos
            
        }
        
        return fe+1;  // bcz fe index start from 0
        
    }
};