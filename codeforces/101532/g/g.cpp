#include <bits/stdc++.h>
#include <set>
#include <map>
#include <stdio.h>
#include <cstring>
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=1e6+7,oo=1e9+7;
int a[N],pr[N],sf[N],tmp,t,n,ans,mn,mx;
char ch[56];
int main(){
scanf("%d",&t);
while(t--){
scanf("%d",&n);
ans=0;mn=-oo;mx=oo;
for(int i=0;i<n;i++){scanf("%d",&a[i]);mn=max(a[i],mn);pr[i]=mn;}
for(int i=n-1;i>=0;i--){mx=min(a[i],mx);sf[i]=mx;}
for(int i=1;i<n-1;i++){ans+=(a[i]>=pr[i-1] && a[i]<=sf[i+1]);}
printf("%d\n",ans);
}
return 0;
}
/**
3
5
2 -1 -1 9 15
3
3 3 -1
7
15 10 -1 1 2 3 4

**/
