// Valid Perfect Square

class Solution {
    public boolean isPerfectSquare(int n) {
        
    long sum = 0;

    for (int i = 1; sum < n; i = i + 2)      
    {

      sum = sum + i;  // 0+1   // 1+ 3(i+2=1+2=3)=4 // 4+5=9 (i+2)

      if (sum == n) { 

        return true;

      }

    }

    return false;
        
    }
}