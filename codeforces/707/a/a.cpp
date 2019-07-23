#include <iostream>
using namespace std;
int main (){
int a,x,y;	
cin>>x>>y;
a=x*y;
int ok=0;
char m[a]; 
for (int i=0;i <a;i++){cin>>m[i];}
for(int i=0;i <a;i++){
	if (m[i]=='W'||m[i]=='B'||m [i]=='G')
	{ok++;}
}
//^^cout <<ok;
if(ok==a){cout <<"#Black&White";}
else {cout<<"#Color";}
	return 0;
}