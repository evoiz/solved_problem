#include <iostream>
#include <algorithm>
#include <cmath>

//^#include <clearScreen>
using namespace std;
int main(){
	int x,ad=0,y;
	cin>>x>>y;
	for (int i=1;i<=x ;i++){
		if (y%i==0&&y/i <=x){ad++;}
	}
	cout <<ad;
	return 0;
}
