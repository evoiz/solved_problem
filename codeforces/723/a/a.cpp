#include <iostream>
#include <algorithm>
#include <cmath>

//^#include <clearScreen>
using namespace std;
int main(){
	//while (1==1){
	int m [3];
	cin>>m [0]>>m[1]>>m [2];
	sort (m,m+3);
int	avg=m [1];
int fin=0;
	for (int i=0;i <3;i++){
		fin+=abs(avg-m [i]);
	}
	cout <<fin<<endl;//}
	return 0;
}