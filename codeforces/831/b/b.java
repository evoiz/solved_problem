import java.util.*;
import java.lang.annotation.*;
public class Main
{
	public static void main(String[] args)
	{
		String s1,s2,s3,s4="";
		Scanner in = new Scanner(System.in);
		s1 = in.nextLine();
		s2 = in.nextLine();
		s3 = in.nextLine();
		if(s1.isEmpty() || s2.isEmpty() || s3.isEmpty())System.exit(0);
		char temp[] = s3.toCharArray();
		boolean savedCaseState[] = new boolean[s3.length()];
		for(int i=0;i<s3.length();i++){
			savedCaseState[i] = isLowerCase(temp[i]);
		////	System.out.println(savedCaseState[i]);
		}
		for(int i=0;i<s3.length();i++){
			char c[] = s3.toLowerCase().toCharArray();
			int index;
			char tempt = '\0';
			if(s1.contains(c[i] +"")){
				index = s1.indexOf(c[i]);
				tempt = s2.charAt(index);
				if(!savedCaseState[i]){
					tempt = toUpperCase(tempt);
				}else{
					tempt = s2.charAt(index);
				}
			}else{
				tempt = c[i];
			}
			
			s4 += tempt;
		}
		//for(boolean b : savedCaseState)System.out.println(b);
		System.out.println(s4);
	}
	
	public final static boolean isLowerCase(char c){
		if(c>='A'&&c<='Z'){
			return false;
		}else{
			return true;
		}
	}
	public final static char toUpperCase(char s){
		int x = (int)s;
		int sub = (int)'A' - (int)'a';
		char z = (char)(x+sub);
		return z;
	}
}