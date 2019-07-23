#include <iostream>
#include <algorithm>
using namespace std;
int main (){
	int size,fin;
	cin>>size>>fin;
	int m [size];
	for (int i=0;i <size;i++){cin>>m [i];}
	sort (m,m+size);
	int sum=0,co=0;
	for (int i=size-1;i>=0;i--){
	if (sum>=fin){break;}
	sum+=m [i];
	co++;}
	cout <<co <<endl;
	return 0;
}