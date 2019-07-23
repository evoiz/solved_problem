#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=2e5+10;
int n,k,tmp,sum,a[N];
map<int ,pair<int ,int > >mp;
bool vis[N];
int main(){
scanf("%d",&k);
for(int j=1;j<=k;j++){
 scanf("%d",&n);
 sum=0;
 for(int i=1;i<=n;i++){scanf("%d",a+i);sum+=a[i];}
  for(int i=1;i<=n;i++){
    tmp=sum-a[i];
     if(mp.find(tmp)!=mp.end()){
     printf("YES\n");
     pair<int ,int > pp=mp[tmp];
     printf("%d %d\n",pp.F,pp.S);
     printf("%d %d\n",j,i);
     return 0;
  }
 }
 for(int i=1;i<=n;i++){
        tmp=sum-a[i];mp[tmp]={j,i};}
}
printf("NO\n");
}
/**

Nearly prime number is an integer positive number for which it is possible to find such primes P1 and P2
that given number is equal to P1*P2.
 There is given a sequence on N integer positive numbers,
  you are to write a program that prints �Yes� if given number is nearly prime and �No� otherwise.
**/
