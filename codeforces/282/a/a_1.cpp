#include <iostream>
using namespace std;
int main (){
//while(1==1){
	int x,d=0;
	cin>>x;
	char a,b,c;
	for(int i=1;i<=x;i++){
	cin>>a>>b>>c;
	if(a=='+'&&b=='+'){++d;}
	if(a=='-'&&b=='-'){--d;}
	if(a=='X'&&b=='+'){d++;}
	if(a=='X'&&b=='-'){d--;}
	}
	cout<<d;
return 0;
}
