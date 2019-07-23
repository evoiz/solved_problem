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
const int N=1e5+7,oo=1e9+7;
long long t,n,a[N],ans,tmp;
int main(){
scanf("%I64d",&t);
while(t--){
scanf("%I64d%I64d",&n,&tmp);
ans=tmp;
for(int i=1;i<n;i++){scanf("%I64d",&a[i]);ans=((tmp+1)*a[i]+tmp)%oo;tmp=ans;}
printf("%I64d\n",ans);
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
