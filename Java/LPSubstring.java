package Experiment08;

public class LPSubstring 
{
	
	static int LPS(String str)
	{
		int maxL = 1, start=0,end, st;
		
		int n = str.length(); 
		
		if (n < 2)
			return n; 
		

		for (int i = 0; i < n; i++)
		{
			end = i - 1;
			st = i + 1;
			
			while ( st < n && str.charAt(st) == str.charAt(i)) 							
				st++;
	
			while ( end>= 0 && str.charAt(end) == str.charAt(i)) 			
				end--;
	
			while (end >= 0 && st < n && str.charAt(end) == str.charAt(st) ){
				end--;
				st++;
		}

		int length = st - end - 1;
		
		if (maxL < length){
			maxL= length;
			start=end+1;
		}
	}
		
	System.out.print("Longest palindrome substring is: ");
	System.out.println(str.substring(start, start + maxL));
	return maxL;
	
}

	public static void main(String[] args)
	{

		String str = "hackerrank";
		System.out.println("Length is: " + LPS(str));
						
	}
}

