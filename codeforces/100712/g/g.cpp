#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
int n,k,a[20],ans,t;
void solve(){
    scanf("%d%d",&n,&k);
    int mask=(1<<n);
    for(int i=0;i<n;i++){scanf("%lld",a+i);}
    ans=0;
    for(int i=1;i<mask;i++){
       int tmp=0,mn=1e9,len=0;
       for(int j=0;j<n;j++){
          if((i>>j)&1){mn=min(mn,a[j]);len++;tmp+=a[j];}
       }
       if(tmp>=k && tmp-mn<k){ans=max(ans,len);}
    }
    printf("%d\n",ans);
}
int main(){
scanf("%d",&t);
while(t--){solve();}
    return 0;
}
/**
2
5 9
4 1 3 5 4
7 37
7 5 8 8 5 10 4

**/
