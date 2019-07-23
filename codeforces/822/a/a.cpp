#include <bits/stdc++.h>
using namespace std;
///vector<>v;
///map<long long,long long>mpx,mpy;
///pair<,>p[];
///set<>st;
long long ans,a,b;
long long fact(int x){
if(x==1||x==0){return 1;}
return (long long)x*fact(x-1);
}
int main(){
cin>>a>>b;
cout<<fact(min(a,b));
}
/**

1=1;1
2=>3;1 2
4=>6;1 2 3
7=>10;1 2 3 4
seg(1)=1;
seg(2)=3;
seg(3)=6;
seg(4)=10;
seg(x)>n;
x*(x+1)/2>n;
x^2+x-2n>0;
delta=b^2-4ac==>delta=1+8n;
x=(b+delta)/2==>1+delta/2;
ans=n-segm(x-1);
test:
n=5;
delta=6;
x=3;
ans=5-seg(2)=5-3=2;
**/
