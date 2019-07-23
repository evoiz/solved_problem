#include <bits/stdc++.h>
using namespace std;
///vector<>v;
///map<long long,long long>mpx,mpy;
///pair<,>p[];
///set<>st;
int a,b;
int main(){
cin>>a>>b;
for(int i=b+1;i!=0;i--){cout<<i<<" ";}
for(int i=b+2;i<=a;i++){cout<<i<<" ";}
cout<<endl;
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
