#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=1e3+10;
using namespace std;

int t,n,a[N],mem[N][1009],ans;
int dp(int l,int r){
 if (l>r){return 0;}
 if (mem[l][r]!= -1 ){return mem[l][r];}
 int ans;
 ans = max(a[r]+min(dp(l,r-2),dp(l+1,r-1)),a[l]+min(dp(l+2,r),dp(l+1,r-1)));
 return mem[l][r]=ans ;
}
int main(){
    scanf("%d",&t);
    while(t--){
        memset(mem,-1,sizeof mem);
        scanf("%d",&n);
        int sum=0;
        for (int i=0;i<n;i++){scanf("%d",&a[i]);sum+=a[i];}
        if(n==1){printf("%d\n",a[0]);continue;}
        int x=dp(0,n-1);
        ans=x-(sum-x);
        printf("%d\n",ans);
    }
    return 0;
}
