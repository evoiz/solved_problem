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
const int N=1e3,oo=1e9+7;
string a;
int mem[N][5],n;
int dp(int i,int last){
if(i==n){return last==3;}
if(mem[i][last]!=-1){return mem[i][last];}
int ans=0;
if(last==1 && a[i]=='A'){ans+=dp(i+1,last+1);}
if((last==0 || last==2)&&a[i]=='Q'){ans+=dp(i+1,last+1);}
ans+=dp(i+1,last);
return mem[i][last]=ans;
}
int main(){
cin>>a;
n=a.length();
memset(mem,-1,sizeof mem);
int ans=dp(0,0);
cout<<ans<<endl;
return 0;
}
/**
d==0
a==1
b==2
c==3
     D
     |
a----|-----c
\    |
  \  b
**/
