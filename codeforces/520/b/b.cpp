#include <bits/stdc++.h>
using namespace std;
int n,m,ans=1e9;
int dfs(int x){
if(x<=n){return abs(x-n);}
if(x%2){return 1+(dfs(x+1));}
else return 1+(dfs(x/2));
}
int main(){
cin>>n>>m;
if(n>m){cout<<n-m<<endl;return 0;}
cout<<dfs(m)<<endl;
}
