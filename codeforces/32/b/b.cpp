#include <iostream>
#include <cmath>
using namespace std;
int main (){
	char m [99999];
	cin>>m;
	int k;
	for (k=0;m [k]!='\0';k++);
//	cout <<k
	for (int i=0;i <k;i++){
		if (m [i]=='.'){cout <<"0";}
		if (m [i]=='-'&&m [i+1]=='-')
		{cout <<"2";i+=1;continue;}
			if (m [i]=='-'&&m [i+1]=='.')
		{cout <<"1";i+=1;continue;}
	}
	return 0;
}