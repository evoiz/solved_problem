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
int mem[N][N][2],ka,kb,na,nb;
long long dp(int ni,int nj,bool ch){
if(mem[ni][nj][ch]!=-1){return mem[ni][nj][ch];}
	if (ni+nj==0){return 1;}
	int ans=0;
	if (ch==0){
		for(int i=1;i<=min(ni,ka);i++){ans+= dp(ni-i,nj,!ch);ans%=mod;}
	}
	else{
		for(int i=1;i<=min(nj,kb);i++){ans+=dp(ni,nj-i,!ch);ans%=mod;}
	}
	return mem[ni][nj][ch]=ans%mod;
}
int main(){
scanf("%d%d%d%d",&na,&nb,&ka,&kb);
memset(mem,-1,sizeof mem);
int ans=(dp(na,nb,0)+dp(na,nb,1))%mod;
printf("%d\n",ans);
}
/**
kind and number of n1 , n2 and use n1 ,in 2
3 3 3 100
1 1 1
**/
