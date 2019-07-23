#include <bits/stdc++.h>
using namespace std;
///vector<>v;
///map<long long,long long>mpx,mpy;
///pair<,>p[];
///set<>st;
const int N=3e5+10;
long long  n,m[N],ans;
int main(){
scanf("%I64d",&n);
for(int i=0;i<n;i++){scanf("%I64d",&m[i]);}
sort(m,m+n);
for(int i=0;i<n;i++){ans+=abs(i+1-m[i]);}

cout<<ans<<endl;
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
