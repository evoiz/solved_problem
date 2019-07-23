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
const int N=1e6+10;
int n,k;
int sig(int x){return x*(x+1)/2;}
bool ch(int x){return (5*sig(x)+k)<=240;}
int bsr(int l,int h){
while(l<=h){
int mid=(l+h)/2;
if(ch(mid)){l=mid+1;}
else{h=mid-1;}
}
return h;
}
int main(){
while(true){
scanf("%d%d",&n,&k);
int ans=bsr(0,n);
printf("%d\n",ans);
return 0;
}
}
/**
kind and number of n1 , n2 and use n1 ,in 2
3 3 3 100
1 1 1
3+3+10=16
**/
