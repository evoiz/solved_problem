#include <bits/stdc++.h>
using namespace std;
long long x,g,y,r,sum,t;
int main(){
scanf("%lld",&t);
while(t--){
cin>>x>>g>>y>>r;
sum=g+y+r;
x=x%sum;
if(x<g){cout<<"GREEN"<<endl;continue;}
if(x>=g && x<g+y){cout<<"YELLOW"<<endl;continue;}
cout<<"RED"<<endl;
}

}
