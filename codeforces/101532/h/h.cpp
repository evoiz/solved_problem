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
long long t,n,tmp,in,out,ans,a,b;
char ch[56];
int main(){
scanf("%d",&t);
while(t--){
scanf("%d%d",&a,&b);
out=0;in=0;
for(int i=0;i<a;i++){
  scanf("%s",ch);
   for(int j=0;j<b;j++){
    if(i==0 || i==a-1 || j==0 || j==b-1){out+=(ch[j]=='0');continue;}
    in+=(ch[j]=='1');
   }
  }
  (in>=out?ans=out:ans=-1);
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
