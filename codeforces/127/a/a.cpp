#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
using namespace std;
const int N=1e2+3;
double x,y,tx,ty,n,k,sum,ans;
double len(int xa,int ya,int xb,int yb){
return sqrt(((xa-xb)*(xa-xb))+((ya-yb)*(ya-yb)));
}
int main(){
cin>>n>>k>>tx>>ty;
for(int i=1;i<n;i++){
cin>>x>>y;
sum+=len(x,y,tx,ty);
tx=x;ty=y;
}
sum=(sum*k)/50;
printf("%.9lf",sum);
}
/**
       1
    /     \
   10     11
   /\      / \
101  100  110 111
**/
