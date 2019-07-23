#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=2e5+19;
ll a[N],fr[N],n;
int  main(){
while(scanf("%lld",&n)!=EOF){
for(int i=1;i<=n;i++){scanf("%lld",a+i);fr[a[i]]=i;}
ll ans=0;
for(int i=1;i<=n;i++){
if(a[i]!=i){
        ans++;
        ll tmp=fr[i];
        ll emp=a[i];
        swap(a[i],a[fr[i]]);
        fr[emp]=tmp;
        }
}
printf("%lld\n",ans);
}
}
/**
3
6 6 6
12
3 14 15 92 65 35 89 79 32 38 46 26
12
3 1 4 1 5 9 2 6 5 3 5 9
7
2 7 1 8 2 8 1
4
1 6 1 8
11
1 2 4 8 16 32 16 8 4 2 1
6
1 2 3 1 2 3
**/
