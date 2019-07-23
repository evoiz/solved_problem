#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=5e3+19;
ll a[N],n,mem[N][N];
ll lcs(){
   for(int i=n; i>=0; i--){
     for (int j=0; j<=n; j++){
       if (i>=j){mem[i][j]=0;continue;}
       ll ans=0;
       if(a[i]==a[j]){ans=mem[i+1][j-1]+1ll;}
       ans=max(ans,max(mem[i+1][j], mem[i][j-1]));
       mem[i][j]=ans;
     }
   }
   return mem[0][n];
}/**
ll dp(int i,int j){
if(i>=j){return 0ll;}
if(mem[i][j]!=-1){return mem[i][j];}
ll ans=0;
if(a[i]==a[j]){ans=max(ans,1ll+dp(i+1,j-1));}
ans=max(ans,dp(i+1,j));
ans=max(ans,dp(i,j-1));
return mem[i][j]=ans;
}**/
ll x;
int  main(){
while(scanf("%lld",&n)!=EOF){
for(int i=0;i<n;i++){scanf("%lld",a+i);}
printf("%lld\n",lcs());
}
}
/**
3
6 6 6
12
3 14 15 92 65 35 89 79 32 38 46 26
12
3 1 4 1 5 9 2 6 5 3 5 9
7
2 7 1 8 2 8 1
4
1 6 1 8
11
1 2 4 8 16 32 16 8 4 2 1
6
1 2 3 1 2 3
**/
