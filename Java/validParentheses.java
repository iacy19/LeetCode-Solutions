class Solution 
{
    public boolean isValid(String s)
    {
        Stack<Character>st=new Stack<>();  // declare stack
		
		char [] A=s.toCharArray();  // converting string into char array
		
		for(int i=0; i<A.length;  i++)
			
		{
			// if opening bracket , just put it into stack ( push operation )
			
			if(A[i]=='('||A[i]=='{'|| A[i]=='[')
			{
				st.push(A[i]);
			}
			
			else  // if closing bracket
			{
				
                               // condition 01 : check if stack is empty 
                               // if empty that mean, our array start with the closing bracket, so there are no match, just return false
				
				if(st.isEmpty())
				{
					return false;  
				}
                                 
                                // condition 02: if stack is not empty then check
                                // if array's closing bracket and stack's top opening bracket is of same type, then just pop the stack elements
                         
				
				else if(A[i]==')'&& st.peek()=='('|| A[i]=='}'&& st.peek()=='{'|| A[i]==']'&& st.peek()=='[') 
					{
						st.pop();
						
					}
				 
				else  //condition 03 : if it is not of same type  eg.  array->  '}'  & stack's top->  '['
					{
						return false;
					}

								
			}
			
			
		}

                 // if stack empty just return false 
                 // if not empty  01) if parentheses of same type  (true)   02)  if is not, return false

		
		return st.isEmpty()? true : false;  

        
    }
}
