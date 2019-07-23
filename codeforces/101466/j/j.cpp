#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=3e7+10;
int n,m,q,x,mod=3e7;
int freq[N],a[N];
int main(){
     scanf("%d%d%d",&n,&m,&q);
    for (int i=0;i<m;i++){
         scanf("%d",a+i);
         freq[a[i]]++;
    }
    for (int i=m;i<n;i++){
       a[i]=(a[i-m]+a[i-m+1])%mod;
      // cout<<a[i]<<" ";
        freq[a[i]]++;
    }
    for(int i=1;i<N;i++){freq[i]+=freq[i-1];}
    while(q--){
       scanf("%d",&x);
       int ans=lower_bound(freq,freq+N,x)-freq;
       printf("%d\n",ans);
    }
    return 0;
}
/**
6 3 6
1 2 3
1 2 3 4 5 6
10 4 3
1 2 9 10
1 5 10
**/
