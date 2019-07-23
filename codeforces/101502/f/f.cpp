#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

ll t,n,q,a[100009],x,y,sum[100009];

ll f(ll tmp){
    if (tmp==1)return 0;
    if (tmp%2==0){return 1+f(tmp/2);}
    else{return 1+f(tmp-1);}
}

int main(){
    scanf("%I64d",&t);
    while(t--){
        scanf("%I64d%I64d",&n,&q);
        for (int i=1;i<n+1;i++)scanf("%I64d",&a[i]);
        for (int i=1;i<n+1;i++){sum[i]=f(a[i]);}
        for (int i=2;i<n+1;i++){sum[i]+=sum[i-1];}
        for (int i=0;i<q;i++){
            scanf("%I64d%I64d",&x,&y);
            printf("%I64d\n",sum[y]-sum[x-1]);
        }
    }
    return 0;
}
