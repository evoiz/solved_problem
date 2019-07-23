#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ll long long
using namespace std;
const int N=1e5+10,oo=1e9;
int mem[210][210][210][4],rr,gg,bb,n;
char s[600];
int dp(int r,int g,int b,int t){
if(r<0 || g<0 || b<0){return 0;}
if(((r+g+b)==(max(r,max(b,g))))){
if(t==1 && r){return 1;}
if(t==2 && g){return 1;}
if(t==3 && b){return 1;}
return 0;
}
if(mem[r][g][b][t]!=-1){return mem[r][g][b][t];}
int ans=0;
ans=max(ans,dp(r-1,g-1,b+1,t));
ans=max(ans,dp(r-1,g+1,b-1,t));
ans=max(ans,dp(r+1,g-1,b-1,t));
if(r>1)ans=max(ans,dp(r-1,g,b,t));
if(g>1)ans=max(ans,dp(r,g-1,b,t));
if(b>1)ans=max(ans,dp(r,g,b-1,t));
return mem[r][g][b][t]=ans;
}
int main(){
memset(mem,-1,sizeof mem);
scanf("%d",&n);
scanf("%s",s);
for(int i=0;i<n;i++){rr+=(s[i]=='R');bb+=(s[i]=='B');gg+=(s[i]=='G');}
if(dp(rr,gg,bb,3)){cout<<"B";}
if(dp(rr,gg,bb,2)){cout<<"G";}
if(dp(rr,gg,bb,1)){cout<<"R";}
}
