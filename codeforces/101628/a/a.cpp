#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define pb push_back
#define sz size
using namespace std;
const int N=1e5+3,mod=1e9+7;
int mem[N][20],na,nb;
char a[N],b[N];
int dp(int i,int j){
if(j==nb){return 1;}
if(i==na){return 0;}
if(mem[i][j]!=-1){return mem[i][j];}
int ans=dp(i+1,j)%mod;
if(a[i]==b[j]){ans+=dp(i+1,j+1)%mod;}
return mem[i][j]=ans%mod;
}
int main() {
  memset(mem,-1,sizeof mem);
  scanf("%s%s",a,b);
  na=strlen(a);nb=strlen(b);
  int ans=dp(0,0)%mod;
  printf("%d\n",ans);
}
/**

**/
