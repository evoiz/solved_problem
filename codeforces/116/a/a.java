import java.util.Scanner;
public class Main {
static Scanner in=new Scanner(System.in);
    public static void main(String[] args) {
       int n,a,b,all=0,total=0;
       n=in.nextInt();
      while(n!=0){
          a=in.nextInt();b=in.nextInt();
          all+=-a+b;
          total=Math.max(all,total);
          n--;
      }
      System.out.println(total);
    }
    
}