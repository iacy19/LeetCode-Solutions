
import java.util.regex.*;
  
class Solution
{
     public static boolean isValidUsername(String name)
    {
  
        String regex = "^[A-Za-z]\\w{5,29}$";
  
        Pattern p = Pattern.compile(regex);
  
        if (name == null) {
            return false;
        }
  
        Matcher m = p.matcher(name);
        return m.matches();

    }

    public static void main(String[] args)
    {
  
        String str = "abcdef";
        System.out.println(isValidUsername(str));
   }
}