#include <bits/stdc++.h>
#define F first
#define S second
using namespace std;
const int N=1e6+9;
long long n,k,t,tmp,m[N];
bool bsr(int l,int h,int d){
if(l>h){return 0;}
int mid=(l+h)/2;
if(m[mid]==d){return 1;}
if(m[mid]<d){return bsr(mid+1,h,d);}
else{return bsr(l,mid-1,d);}
}
int main(){
scanf("%I64d",&t);
while(t--){
    bool ok=0;
    scanf("%I64d%I64d",&n,&k);
    for(int i=0;i<n;i++){scanf("%I64d",&m[i]);}
    sort(m,m+n);
     for(int i=0;i<n;i++){
        if(m[i]==0){continue;}
        if(k%m[i]==0 && bsr(i+1,n-1,k/m[i])){
            printf("%I64d %I64d\n",m[i],k/m[i]);
            ok=1;
            break;
        }
     }
    if(!ok){printf("-1\n");}
}
return 0;
}