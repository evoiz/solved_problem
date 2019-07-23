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
int t,a,b,c,d,aa,bb;
int main(){
scanf("%d",&t);
for(int i=1;i<=t;i++){
scanf("%d%d%d%d",&a,&b,&c,&d);
aa=(a*60)+b;
bb=(c*60)+d;
printf("Case %d: %d\n",i,bb-aa);
}
return 0;
}
/**



**/
