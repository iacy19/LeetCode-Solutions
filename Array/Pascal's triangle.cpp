class Solution {
public:
    
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> v(numRows); 
        
        for(int i=0; i<numRows; i++)
        {
           v[i].resize(i + 1); // no of col equal to no of rows
            v[i][0]= v[i][i]=1; // set every first and last ele 1  
            
            for(int j=1; j<i; j++) // for sum 
            {
                v[i][j]=v[i-1][j-1]+ v[i-1][j]; // 2= 1+1  
            }
        }
        
        return v;
    }
};