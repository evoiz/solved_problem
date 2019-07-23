#include <iostream>
using namespace std;
int main (){
	char m [99999];
	cin>>m;
	int j;
	for ( j=0;m [j]!='\0';j++);
	int ok=0;
	for (int i=0;i <j;i++){
		if (m [i]=='H' || m [i]=='Q'|| m [i]=='9'){ok=1;break;}
	}
	if (ok==1){cout <<"YES";}
	else cout <<"NO";
	return 0;
}