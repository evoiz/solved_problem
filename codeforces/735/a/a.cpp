#include <iostream>
using namespace std;
int main (){
	int tw,k,g;
	bool t=false;
	cin>>tw>>k;
	char bh [tw];
	cin>>bh;
	for (g=0;g<tw;g++)
	if(bh [g]=='G'){break;}
	
	
	for (int i=g;i <tw;i+=k){
	if (bh [i]=='#'){break;}
	if (bh [i]=='T'){t=true;}}
	
	
	
	
	for (int i=g;i >=0;i-=k){
	if (bh [i]=='#'){break;}
	if (bh [i]=='T'){t=true;}}
	
	
	if (t==true)
	cout <<"YES";
	else 
	cout <<"NO";
	return 0;
}