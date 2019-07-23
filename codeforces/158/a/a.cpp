#include <iostream>
using namespace std;
int main (){
//while(1==1){
	int x,y,ad=0;
	cin>>x>>y;
	int m[x];
for ( int i=0 ;i <x;i++){
		cin>>m [i];
	}
int	mx=m[y-1];
if(mx==0){for (int i=0 ;i <x;i++){
		if(m[i]>0){ad++;}}}
else     {for (int i=0 ;i <x;i++){
		if(m[i]>=mx && mx>0){ad++;}}}
cout<<ad++<<endl;
return 0;
}
