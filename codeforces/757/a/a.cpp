#include <iostream>
#include <algorithm>
using namespace std;
char m[100003];
//char st[9]={'b','u','l','b','a','s','a','u','r'};
//////////////bulasr
int main(){
cin>>m;
int ss;
//////////////bulasr
int b=0,u=0,l=0,a=0,s=0,r=0,bb=0;
for(ss=0;m[ss]!='\0';ss++){
if(m[ss]=='B'){bb++;}
	if(m[ss]=='b'){b++;}
	if(m[ss]=='u'){u++;}
	if(m[ss]=='l'){l++;}
	if(m[ss]=='a'){a++;}
    if(m[ss]=='s'){s++;}
    if(m[ss]=='r'){r++;}
}
u=u/2;
a=a/2;
//cout<<"a="<<a<<" b="<<b<<" u="<<u<<" l="<<l<<" s="<<s<<" r="<<r<<endl;
int fin[7]={b,u,l,a,s,r,bb};
sort(fin,fin+7);
///for(int i=0;i<6;i++){cout<<fin[i]<<" ";}

cout<<fin[0]<<endl;
return 0;
}
