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
const int N=103,oo=1e6+10,mod=1e8;
long long mem[N][N][11][11];
int na,nb,ka,kb;
long long dp(int ni, int nj,int ki,int kj){
if(!ni && !nj){return 1;}
///if(!ni || !nj){}
if(ni<0 || nj<0){return 0;}
if(mem[ni][nj][ki][kj]!=-1){return mem[ni][nj][ki][kj]%mod;}
long long ans=0;
if(!ki){ans+=dp(ni,nj-1,ka,kj-1)%mod;}
else if(!kj){ans+=dp(ni-1,nj,ki-1,kb)%mod;}
else {
ans+=dp(ni,nj-1,ka,kj-1)%mod;
ans+=dp(ni-1,nj,ki-1,kb)%mod;
}
return mem[ni][nj][ki][kj]=ans%mod;
}
int main(){
scanf("%d%d%d%d",&na,&nb,&ka,&kb);
memset(mem,-1,sizeof mem);
long long ans=dp(na,nb,ka,kb);
cout<<ans;
}
/**
kind and number of n1 , n2 and use n1 ,in 2
3 3 3 100
1 1 1
**/
