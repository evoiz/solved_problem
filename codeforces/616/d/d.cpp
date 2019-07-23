#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scc(a) scanf(" %c",&a)
#define scs(a) scanf(" %s",a)
#define me(a,b) memset(a,b,sizeof a)
#define all(a) a.begin(),a.end()
#define allr(a,n) a,a+n
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
using namespace std;
const int N=1e6+19;
int n,k,mx,a[N],ii,jj,kk,fr[N];
void add(int ind){
if(fr[a[ind]]==0){kk++;}
fr[a[ind]]++;
}
void rem(int ind){
fr[a[ind]]--;
if(fr[a[ind]]==0){kk--;}
}
int main(){
sc(n);sc(k);
read_arr(a,1,n);
for(int i=1,j=1;i<=n;i++){
 while(j<=n){
   add(j);
   if(kk>k){
    rem(j);
    break;
   }
   if(j-i+1>mx){
        mx=j-i+1;
        ii=i;
        jj=j;
    }
    j++;
 }
 rem(i);
}
printf("%d %d\n",ii,jj);
}
/**
n+i^3 = j^3;
**/
