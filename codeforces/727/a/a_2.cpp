#include <iostream>
#include <cmath>
using namespace std;
long long a,b;
long long co=0;
long long m[99999]={0};
long long rv(long long x){
if(x<=a){return x;}
if(x%2==0){m[co]=x;co++;return rv(x/2);}
if(x%2==1){
if(x%10==1){m[co]=x;co++;return rv(x/10);}
else {m[co]=x;co++;return x;}
}
}
int main (){
 cin>>a>>b;
 int fin = rv(b);
 if(fin==a){
 cout<<"YES"<<endl<<co+1<<endl<<a<<" ";
for(int i=co-1;i >=0;i--){
	cout <<m [i]<<" ";
}
 }
 else {cout<<"NO";}
	return 0;
}