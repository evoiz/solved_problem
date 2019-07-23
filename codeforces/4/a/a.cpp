#include <iostream>
using namespace std;
int main(){
int x,z;
cin>>x;
for(int i=1;i<=x;i++){
z=x-i;
if(z%2==0&&i%2==0 &&i!=x){
cout<<"YES";
break;
}
if(i==x){
cout<<"NO";
break;
}
}
return 0;
}