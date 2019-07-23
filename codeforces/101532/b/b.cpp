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
const int N=1e3+7,oo=1e9+7;
int a[N],mod,n,t,one,tmp;
void print(){
for(int i=0;i<n;i++){printf("%d ",a[i]);}
printf("\n");
int c;cin>>c;
}
int main(){
scanf("%d",&t);
while(t--){
scanf("%d%d",&n,&mod);
for(int i=0;i<n;i++){scanf("%d",&a[i]);one+=(a[i]==-1);}
if(one==n){a[0]=0;one--;}
while(one){
  if(a[1]!=-1 && a[0]==-1){a[0]=((a[1]-1)%mod+mod)%mod;one--;}////(b + (a%b)) % b
  for(int i=1;i<n-1 && one;i++){
  ///print();
  if(a[i]==-1 && a[i-1]!=-1){a[i]=((a[i-1]+1)%mod+mod)%mod;one--;continue;}
  if(a[i]==-1 && a[i+1]!=-1){a[i]=((a[i+1]-1)%mod+mod)%mod;one--;continue;}
  }
  if(a[n-1]==-1 && a[n-2]!=-1){a[n-1]=((a[n-2]+1)%mod+mod)%mod;one--;}
}
for(int i=0;i<n;i++){printf("%d ",a[i]);}
printf("\n");

}
return 0;
}
/**
100
5 3
-1 -1 -1 -1 -1
5 10
1 2 3 4 5
4 10
7 -1 9 -1
6 7
5 -1 -1 1 2 3
6 10
5 -1 7 -1 9 0
**/
