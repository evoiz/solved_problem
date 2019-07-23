#include <bits/stdc++.h>
#define s second
#define f first
using namespace std;
int  n,m;
long long segma(int x){
return x*(x+1)/2;
}
void solve(int x){
for (int i=1;i<=n;i++){if(x-i<0){cout<<x<<endl;return ;}x-=i;}
}
int main(){
cin>>n>>m;
solve(m%segma(n));
}
