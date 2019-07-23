
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
string s;
cin>>s;
s="00"+s;
   /// cout<<s<<endl;
int n=s.size();
//cout<<s<<endl;
for(int i=0;i<n;i++){
   for(int j=i+1;j<n;j++){
      for(int k=j+1;k<n;k++){
       int a,b,c;
       a=s [k]-48;b=(s [j]-48)*10;
       c=(s [i]-48)*100;
     ////  cout <<a<<b<<c <<endl;
       if ((a+b+c)%8==0)
       {cout <<"YES"<<endl <<a+b+c;
       return 0;}
      }
   }
}
cout <<"NO"<<endl;
return 0;
}
/*
1 = 1 3
0 = 2 4

*/
