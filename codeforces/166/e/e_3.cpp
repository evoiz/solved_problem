#include <set>
#include <map>
#include <stdio.h>
#include <cstring>
#include <iostream>
#include <vector>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=1e7+2,mod=1e9+7;
int mem[N][5],n;
int dp(int sum,int last){
if(!sum && !last){return 1;}
if(sum<=0){return 0;}
if(mem[sum][last]!=-1){return mem[sum][last];}
int ans=0;
for(int i=0;i<4;i++){
if(i==last){continue;}
ans+=dp(sum-1,i)%mod;
ans%=mod;
}
return mem[sum][last]=ans%mod;
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
/**
d==0
a==1
b==2
c==3
     D
     |
a----|-----c
\    |
  \  b
**/
