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
int t,tmp,n,mx;
map<int ,int >mp;
int main(){
scanf("%d",&t);
while(t--){
scanf("%d",&n);
mx=-oo;mp.clear();
for(int i=0;i<n;i++){scanf("%d",&tmp);mp[tmp]++;}
for(auto x:mp){mx=max(x.S,mx);}
for(auto x:mp){if(mx==x.S){printf("%d\n",x.F);break;}}
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
