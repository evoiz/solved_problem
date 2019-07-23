#include <iostream>
using namespace std;
int main()
{
string m;
cin>>m;
for (int i=0;i <7;i++){
	string t;
	cin>>t;
	m=m+t;
}
int co=0;
//////////////////////3mod
for(int i=0;i<8;i++){
char ok= m[i];
if (ok=='B'){
bool k=0;
for(int j=i;j<=i+56;j+=8){if(m[j]!=ok){k=1;break;}}
if(k==0){co++;}
}
}
//cout<<co<<endl;
//////////////////////////saf
for(int i=0;i<64;i+=8){
char ok=m[i];
if (ok=='B'){
bool k=0;
for(int j=i;j<i+8;j++){if(m[j]!=ok){k=1;break;}}
if(k==0){co++;}
}
}
////special ///
int sp=0;
for (int i=0;i <64;i++){
	if(m [i]=='B'){sp++;}
}
if (co==16){co=8;}
cout<<co<<endl;
return 0;
}