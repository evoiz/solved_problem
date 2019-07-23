#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size

using namespace std;

int t,n,a[1009],mem[1009][1009][2],ans;
int dp ( int l , int r , bool p ){
 if (l>r){return 0;}
 if (mem[l][r][p]!= -1 ){return mem[l][r][p];}
 int ans;
 if (!p){
 ans = max(a[r]+dp(l,r-1,1),a[l]+dp(l+1,r,1));
 return mem[l][r][p]=ans;
 }
 ans = min (dp (l+1,r,0), dp (l,r-1,0));
 return mem[l][r][p]=ans ;
}
int main(){
    scanf("%d",&t);
    while(t--){
        memset(mem,-1,sizeof mem);
        scanf("%d",&n);
        int sum=0;
        for (int i=0;i<n;i++){scanf("%d",&a[i]);sum+=a[i];}
        if(n==1){printf("%d\n",a[0]);continue;}
        int x=dp(0,n-1,0);
        ans=x-(sum-x);
        printf("%d\n",ans);
    }
    return 0;
}
