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
int v,e,t;
int main(){
scanf("%d",&t);
while(t--){
scanf("%d%d",&v,&e);
printf("%d\n",2-(v-e));
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
