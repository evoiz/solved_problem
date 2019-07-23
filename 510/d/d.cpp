#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

const int N=1e4,oo=1e9;
map<int,int>mem[N];int a[N],b[N],n;
int dp(int i,int gcd){
if(i==n){return (gcd==1?0:oo);}
if(mem[i].count(gcd)){return mem[i][gcd];}
int ans=min(dp(i+1,gcd),b[i]+dp(i+1,__gcd(gcd,a[i])));
return mem[i][gcd]=ans;
}
int main(){
 scanf("%d",&n);
 for(int i=0;i<n;i++){scanf("%d",a+i);}
 for(int i=0;i<n;i++){scanf("%d",b+i);}
 int ans=dp(0,0);
 if(ans==oo){printf("-1\n");return 0;}
 printf("%d\n",ans);
}
