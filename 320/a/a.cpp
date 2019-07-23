#include <iostream>
using namespace std;
int main (){
 char m[999];
 cin>>m;
 int nu;
 bool ok=1;
 for(nu=0;m [nu]!='\0';nu++);
 for (int i=0;i <nu;i++){
 if(m [i]=='1'&& m [i+1]=='4' && m [i+2]=='4')
 {i+=2;continue;}
 else if(m [i]=='1'&& m [i+1]=='4')
 {i++;continue;}
 else if(m [i]=='1')
 {continue;}
 else {ok=0;break;}
 
 }
 if(ok==1){cout <<"YES";}
 else cout<<"NO";
	return 0;
}