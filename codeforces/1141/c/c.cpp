#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+10;
ll dir[N],n,cnt=1;
ll s;
vector<ll> ans;
map<ll,ll> mp;
int main(){
scanf("%lld",&n);
for(int i=0;i<n-1;i++){scanf("%lld",&dir[i]);}
s=1ll;
ans.push_back(s);
mp[s];
for(int i=0;i<n-1;i++){
     s=1ll*s+dir[i];
     if(mp.find(s)!=mp.end()){printf("-1");return 0;}
     mp[s];
     ans.push_back(s);
}
for(auto &x:mp){x.second=cnt++;}
//for(int x=1;x<ans.size();x++){if((ans[x]-ans[x-1])!=dir[x-1]){printf("-1");return 0;}}
ll mn=*min_element(ans.begin(),ans.end());
ll mx=*max_element(ans.begin(),ans.end());
if(mx-mn+1>n){printf("-1");return 0;}
for(auto x:ans){
    printf("%lld ",mp[x]);
}
}
