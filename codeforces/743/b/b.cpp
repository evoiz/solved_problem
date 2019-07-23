#include <iostream>
using namespace std;
int main (){
	long long n,x,co=1;
	cin>>n>>x;
	while (x%2==0){
		x/=2;
		co++;
	}
	cout <<co<<endl;
	return 0;
}