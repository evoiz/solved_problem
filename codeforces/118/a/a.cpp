#include <iostream>
using namespace std;
int is (char f){
	if (f =='a' || f=='u' || f=='o' || f=='i' ||f=='y'|| f=='e')
	return 0;
	else 
	return 1;
}
int main (){ 
	char m [99999];
	cin>>m;
	int i;
	for(i=0;m [i]!='\0';i++);
	for(int j=0;j <i;j++){
		if (m[j]>='A' && m [j]<='Z')
		m [j]+=32;
	}
	for(int j=0;j <i;j++)
	{if (is (m [j])==1){cout<<"."<<m [j];}
//^	else cout <<m [i];
	}
	return 0;
}