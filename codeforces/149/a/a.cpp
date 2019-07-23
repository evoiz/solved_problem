#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int fin=0,in,ad=0;
	cin>>in;
	int m [12];
	for (int i=0;i <12;i++){cin>>m [i];}
	sort(m,m+12);
	if (in!=0){
	for (int i=11; i>=0;i--)
	{ fin+=m [i];
		if (fin>=in){ad++;break;}
		else {ad++;}
		if (i==0 && fin<in){ad=-1;}
	}}
	cout <<ad;
	return 0;
}