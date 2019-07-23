#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=1005;
int t,n,a[N],mem[N][N],mem2[N][N],mod=1e9+7,ans1,ans2;


int LIS(int pos,int last){
    if (pos==n+1){return 0;}
    if (mem[pos][last]!=-1)return mem[pos][last];
    int ans=LIS(pos+1,last);
    if (a[pos]>a[last]){ans=max(ans,1+LIS(pos+1,pos));}
    return mem[pos][last]=ans;
}
int dp(int pos,int last){
   if(pos==n+1){return 1;}
   int &ret=mem2[pos][last];
   if(ret!=-1){return ret;}
   ret=0;
   int ans=LIS(pos,last);
   if(ans==LIS(pos+1,last)){
     ret+=dp(pos+1,last);
     ret%=mod;
   }
   if(a[pos]>a[last]){
    if(ans==1+LIS(pos+1,pos)){
     ret+=dp(pos+1,pos);
     ret%=mod;
     }
   }
   return ret;
}
int main(){
    a[0]=-1e9;
    cin >> t;
    while(t--){
        ans1=0,ans2=0;
        memset(mem,-1,sizeof mem);
        cin >> n;
        for (int i=1;i<=n;i++){cin >> a[i];}
        ans1=LIS(1,0);
        memset(mem2,-1,sizeof mem2);
        ans2=dp(1,0);
        cout<<ans1<<" "<<ans2<<endl;
    }
    return 0;
}
