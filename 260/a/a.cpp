#include<bits/stdc++.h>
using namespace std;
long long n,m,l;
void dfs(long long  x){
l--;
long long ans=x*10;
for(int i=0;i<10;i++){
  if((ans+i)%m==0){cout<<ans+i;while(l--){cout<<0;}exit(0);}
 }
 return ;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m>>l;
    dfs(n);
    cout<<-1<<endl;
    return 0;
}
/**
n=3 m=4;
6 7 8 9;
6=1 2 3 4 5 6

**/
