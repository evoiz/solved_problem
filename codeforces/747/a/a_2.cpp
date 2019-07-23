#include <iostream>
using namespace std;
int main (){
	int x;cin>>x;
int max=999999999;
for (int i=1;i <=x;i++){
	if ( x%i==0){
		if (i+(x/i)<max){max=i+(x/i);}
	}
	
	
}
for (int i=1;i <=max;i++){
	if(i+(x/i)==max && i*(x/i)==x){
	cout <<i <<" "<<x/i;break;}
}
return 0;
}