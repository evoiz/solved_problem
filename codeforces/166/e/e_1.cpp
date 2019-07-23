#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=1e7+2,mod=1e9+7;
int n,mem[N][5];

int dp(int x,int last){
    if(!x&&!last)return 1;
    if(x<=0)return 0;
    if(mem[x][last]!=-1)return mem[x][last]%mod;
    int ans=0;
    for (int i=0;i<4;i++){
        if (last==i){continue;}
        ans+=dp(x-1,i)%mod;
        ans%=mod;
    }
    return mem[x][last]=ans%mod;
}
int main(){
memset(mem,-1,sizeof mem);
int ans=0;
for(int i=2;i<1e7;i+=100){ans=dp(i,0);}
scanf("%d",&n);
ans=dp(n,0)%mod;
printf("%d\n",ans);
return 0;
}
