#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
string ans;
void dfs (long long x){
if(x==0){return ;}
if(x%2){ans="A"+ans;dfs((x-1)/2);return;}
ans="B"+ans;
dfs((x-2)/2);return;
}
long long n;
int main(){
cin>>n;
dfs(n);
cout<<ans<<endl;
}
