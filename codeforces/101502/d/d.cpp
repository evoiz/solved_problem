#include <bits/stdc++.h>
#define pb push_back
#define F first
#define S second
using namespace std;
const int N=1e3+3;
vector<int>v[7];
void start(){
v[1].pb(2);v[1].pb(3);v[1].pb(4);v[1].pb(5);
v[2].pb(4);v[2].pb(1);v[2].pb(3);v[2].pb(6);
v[3].pb(2);v[3].pb(5);v[3].pb(1);v[3].pb(6);
v[4].pb(2);v[4].pb(1);v[4].pb(5);v[4].pb(6);
v[5].pb(3);v[5].pb(4);v[5].pb(1);v[5].pb(6);
v[6].pb(2);v[6].pb(5);v[6].pb(4);v[6].pb(3);
}
int inf=1e6;
int t,n,mem[10][10000],ans;
int dp(int pos,int x){
    if (x==0){return 0;}
    if (x<0){return inf;}
    if (mem[pos][x]!=-1)return mem[pos][x];
    int ans=1e9;
    for (int i=0;i<v[pos].size();i++){
        ans=min(ans,1+dp(v[pos][i],x-v[pos][i]));
    }
    return mem[pos][x]=ans;
}
bool ok;
int main(){
    start();
    memset(mem,-1,sizeof mem);
    mem[1][1]=1;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(n==1){printf("-1\n");continue;}
        ans=dp(1,n);
        printf("%d\n",ans);
    }
    return 0;
}
