class Solution 
{
    
    public List<Integer> spiralOrder(int[][] matrix) {
        
    List<Integer>list = new ArrayList<Integer>(); // initialize list as an Arraylist
        
        
        int minR=0;    // minimum row
        int minC=0;     // minimum column
        int MAXr=matrix.length-1;  // maximum row
        int MAXc=matrix[0].length-1; // maximum column
        int totalElement = matrix.length*matrix[0].length; //total ele = row*column
        int count=0; // count variable 
        
        // lets's take example 1, given matrix size  = 3*3
        
        // 1) if top & bottom traversal happen : column change but row remain same
        // 2) if left & right traversal happen : row change but column remain same
        // 3) Removing repetition of corner elements: 
        // top [row++], left [column++], bottom [row--], right [row--]
        
        
        
        while(count < totalElement){   // 0<9

            // top wall   1->2->3  minC to MAXc [j]
            
            for(int i=minR, j=minC; j<=MAXc && count<totalElement; j++)
            {
                list.add(matrix[i][j]); // adding element to list
                count++; //increasing count value
            }
            minR++; // removing repetition of corner 3, by increasing row value
            
            // right wall  6->9   minR to MAXr [i]
            
            for(int i=minR, j=MAXc; i<=MAXr && count<totalElement; i++){
                list.add(matrix[i][j]);
                count++;
            }
            MAXc--; // removing repetition of corner 9

            // bottom wall   8->7   MAXc to  minC  [j]
            
            for(int i=MAXr, j=MAXc; j>=minC && count<totalElement; j--){
                list.add(matrix[i][j]);
                count++;
            }
            MAXr--; //removing repetition of corner 7
            
            // left wall  4  MAXr to minR  [i]
            
            for(int i=MAXr, j=minC; i>=minR && count<totalElement; i--){
                list.add(matrix[i][j]);
                count++;
            }
            minC++; //removing repetition of corner 4
            
        }
        return list;
    }
        
}
