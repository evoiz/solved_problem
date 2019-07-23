#include <iostream>
using namespace std;
int main (){
 int x;
 cin>>x;
 if (x%2==0){
 	int n=x/2;cout <<n<<endl;
 	for (int i=1;i <n;i++){cout <<"2 ";}
 	cout <<"2";
 }
  if (x%2==1){
 	int n=((x-3)/2)+1;cout <<n<<endl;
 	for (int i=1;i <n;i++){cout <<"2 ";}
 	cout <<"3";
 }
	return 0;
}