#include <iostream>
using namespace std;
int main (){
	int x,max=1;
	cin>>x;
	for (int i=1;i*i <=x;i++){
		if (x%i==0){max=i;}
	}
	cout <<max<<" "<<x/max<<endl;
	return 0;
}