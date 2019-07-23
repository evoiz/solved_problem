#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=1e5+10,oo=1e9+10;
int a[N];
int n,k,tmp,t;
bool ok(int x){
int last=a[0];
int cnt=1;
 for(int i=1;i<n;i++){
                if(a[i]>=last+x){last=a[i];cnt++;}
}
return (cnt<=k);
}
int bsr(int l, int h){
int  mid;
while(l<=h){
    mid=(l+h+1)/2;
    if(ok(mid)){h=mid-1;}
    else{l=mid+1;}
}
return h;
}
int main(){
scanf("%d",&t);
while(t--){
memset(a,0,sizeof a);
scanf("%d%d",&n,&k);
for(int i=0;i<n;i++){scanf("%d",a+i);}
int ans =bsr(0,oo);
printf("%d\n",ans+1);
}
    return 0;
}
/**
2
3
1 10 16
2
8 12


**/
