#include <iostream>
#include <algorithm>
using namespace std;
int main (){
	int m [3];
	for (int i=0;i <3;i++){cin>>m [i];}
	int ms [4];
	ms [0]=(m [0]+m [1])*m [2];
	ms [1]=m [0]*(m [1]+m [2]);
	ms [2]=(m [0]*m [1])*m [2];
	ms [3]=(m [0]+m [1])+m [2];
	sort (ms,ms+4);
	cout<<ms[3];
	return 0;
}