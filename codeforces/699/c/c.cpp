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
const int N=1e2+10,oo=1e6+10;
int n,a[N],mem[N][5];
long long dp(int i, int last){
if(i==n){return 0;}
if(mem[i][last]!=-1){return mem[i][last];}
int ans;
////////////////////////
     if(last==0){///////no take
        if(a[i]==0){ans=1+dp(i+1,0);}
        if(a[i]==1){ans=min(dp(i+1,2),1+dp(i+1,0));}
        if(a[i]==2){ans=min(dp(i+1,1),1+dp(i+1,0));}
        if(a[i]==3){ans=min(1+dp(i+1,0),min(dp(i+1,1),dp(i+1,2)));}
     }
////////////////////////
    if(last==1){///////take gym
        if(a[i]==0){ans=1+dp(i+1,0);}
        if(a[i]==1){ans=min(dp(i+1,2),1+dp(i+1,0));}
        if(a[i]==2){ans=1+dp(i+1,0);}
        if(a[i]==3){ans=min(1+dp(i+1,0),dp(i+1,2));}
    }
///////////////////////
    if(last==2){///////take contest
        if(a[i]==0){ans=1+dp(i+1,0);}
        if(a[i]==1){ans=1+dp(i+1,0);}
        if(a[i]==2){ans=min(dp(i+1,1),1+dp(i+1,0));}
        if(a[i]==3){ans=min(1+dp(i+1,0),dp(i+1,1));}
    }
//////////////////////
    if(last==3){ans=1+dp(i+1,0);}
    return mem[i][last]=ans;
}
int main(){
scanf("%d",&n);
memset(mem,-1,sizeof mem);
for(int i=0;i<n;i++){scanf("%d",&a[i]);}
long long ans=dp(0,0);
cout<<ans;
}
/**
sum is m
and bugs <b;
3 3 3 100
1 1 1
**/
