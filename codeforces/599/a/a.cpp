#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int m [3];
	for (int i=0;i <3;i++){cin>>m [i];}
	sort (m,m+3);
	if (m [0]==m [1] &&m[1]==m [2])
	{cout <<m [0]*3;}
	else {
	if ((m [0]+m [1])<=m [2])
	cout <<(m[0]*2)+(m [1]*2);
	if ((m [0]+m [1])>m [2])
		cout <<m [0]+m [1]+m [2];
	}
	return 0;
}