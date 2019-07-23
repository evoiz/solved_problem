#include <iostream>
using namespace std;
int main (){
int x , n=2,j=2;
cin>>x;
if ( x%2==0){
	cout<<x/2<<endl;}
if ( x%2==0){
	while (j <=x-2){
		cout <<n<<" ";
		j+=2;
	}
	cout <<"2";
}
if (x%2!=0){
	cout <<(x-1)/2 <<endl;}
if (x%2!=0){
	while (j <=x-3){
		cout <<n<<" ";
		j+=2;
	}
	cout<<"3";
}
return 0;
}