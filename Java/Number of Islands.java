class Solution 
{
    public int numIslands(char[][] grid) 
    {
        int count=0;
        int r=grid.length; // no of rows = 4    [ example 1] 
        int c=grid[0].length; // no of columns = 5 ( row*column)
        
        for(int i=0;i<r;i++){
             for(int j=0;j<c;j++){
                 
                if(grid[i][j] == '1'){   // if found new island 
                    count++;         //increase the value of count
                    grid[i][j]='0';  // make it visited  ( 0 mean visited)
                     check_adjacent(i,j,grid,r,c); 
                    // check all the adjacent of its , call to check_adjacent method
                }
            }
        }
        return count;  
    }
    
    public void check_adjacent(int i,int j,char grid[][], int r, int c)
    {    // i pointing to row  // j = pointing to column
         
         int Xc[]=new int[]{0,1,0,-1}; // x and y axis coordinates
         int Yc[]=new int[]{1,0,-1,0};
        
        for(int it=0;it<4;it++)        // bcz total 4 adj,  possible so 0 to 3
        {
            int adjX=i+Xc[it];   // first case  adjX= 0(row)+Xc[0]= 0+0 =0
            int adjY=j+Yc[it];  //  adjY= 0(coln)+ Yc[0]= 0+1 =1  
            
            // first case (0,1)
            
if(adjX>=0 && adjY>=0 && adjX<r && adjY<c && grid[adjX][adjY]=='1') // adjccent not visited 
            {
                grid[adjX][adjY]='0'; // make it visited
                check_adjacent(adjX,adjY,grid,r,c); 
            }
        }
    }
}
    

