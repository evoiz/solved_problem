#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=1e7+10,M=1e9+1;
int dp[N],n,tmp,x,y,q,freq[N];
bool vis[N];
void seive(){
memset(vis,1,sizeof vis);
  for(int i=2;i<=N-3;i++){
    if(vis[i]){
     dp[i]+=freq[i];
      for(int j=2*i;j<=N-3;j+=i){
        vis[j]=0;
         dp[i]+=freq[j];
      }
    }
  }
  tmp=0;
  for(int i=0;i<N;i++){tmp+=dp[i];dp[i]=tmp;}
}
int main(){
  scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&tmp);
        freq[tmp]++;
    }
seive();
scanf("%d",&q);
while(q--){
scanf("%d%d",&x,&y);
x=min(x,10000000);
y=min(y,10000000);
int ans=dp[y]-dp[x-1];
printf("%d\n",ans);
}
    return 0;
}
/**
6
5 5 7 10 14 15
3
2 11
3 12
4 4


1 2 3 4 5 6 7 8 9 10 11
  2 1   4   2
**/
