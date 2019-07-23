#include <iostream>
#include <algorithm>
using namespace std;
////////////
int main(){
int sz;
cin>>sz;
int m [sz];
for (int i=0;i <sz;i++){cin>>m [i];}
for (int i=1;i <=sz;i++){
	for (int j=0;j <sz;j++){
		if (m [j]==i){cout <<j+1<<" ";break;}
	}
}
return 0;
}