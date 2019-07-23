#include <bits/stdc++.h>
using namespace std;
const int N=1e4+5;
int m[N],n,k,n2,n4,nelse,tmp;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cin>>n>>k;
n2=2*n,n4=n;
for(int i=0;i<k;i++){cin>>m[i];}
for(int i=0;i<k;i++){
    if (m[i] >= 4){tmp= min(n4,m[i]/4);m[i]-=tmp*4;n4-=tmp;}
 }
if(n4){n2+=n4;nelse=n4;}
for(int i=0;i<k;i++){
    if (m[i]>=2){tmp=min(n2,m[i]/2);m[i]-=tmp*2;n2-=tmp;}
 }
if(n2){nelse+=n2;}
tmp=0;
for(int i=0;i<k;i++){tmp+=m[i];}
tmp=nelse-tmp;
cout<<(tmp>=0?"YES\n":"NO\n");
}
