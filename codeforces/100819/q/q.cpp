#include<bits/stdc++.h>
using namespace std;
vector<long long> v;
long long tmp,n,ans=1e9;
int main(){
    cin>>n;
    while(n--){cin>>tmp;v.push_back(tmp);}
    sort(v.begin(),v.end());
    n=v.size();
    for(int i=0;i<(v.size())/2;i++){ans=min(ans,v[i]+v[n-1-i]);}
    cout<<ans<<endl;
}
/**
4 3
2 BROKEN
2 BROKEN
1 SAFE
3 BROKEN

**/
