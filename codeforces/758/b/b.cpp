#include <iostream>
using namespace std;
char m [1004];
int sz,r=0,b=0,y=0,g=0,t=0;
void next(int in){
///	cout <<in<<" "<<m [in+4] <<endl;
	if(m [in+4]!='!'){
		if(m[in+4]=='R'){r++;m [in]='R';t--;}
		if(m[in+4]=='G'){g++;m [in]='G';t--;}
		if(m[in+4]=='Y'){y++;m [in]='Y';t--;}
		if(m[in+4]=='B'){b++;m [in]='B';t--;}
	}
}
void pv(int in){
	////cout <<in <<endl;
		if(m [in-4]!='!'){
		if(m[in-4]=='R'){r++;m [in]='R';t--;}
		if(m[in-4]=='G'){g++;m [in]='G';t--;}
		if(m[in-4]=='Y'){y++;m [in]='Y';t--;}
		if(m[in-4]=='B'){b++;m [in]='B';t--;}
	}
}
int main (){
	cin>>m;
	for (sz=0;m [sz]!='\0';sz++)
	{if(m [sz]=='!'){t++;}}
////	cout <<t <<endl;
	while (t!=0){
	for (int i=0;i <=sz-3;i++){
		if (m [i]=='!'){next (i);continue;}
	}
//////^^	cout <<t <<endl;
   for (int i=sz-1;i >=4;i--){
	if (m [i]=='!'){pv(i);continue;}
		}
	}
	cout <<r <<" "<<b <<" "<<y<<" " <<g;
	return 0;
}