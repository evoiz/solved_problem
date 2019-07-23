#include<bits/stdc++.h>
using namespace std;
pair<int, int>p[100005];
int n,x,s=1,ans;
int main() {
    cin>>n>>x;
    for (int i = 0; i < n; i++){cin>>p[i].first>>p[i].second;}
    sort(p,p+n);
    for (int i=0;i<n;i++) {
        while(s+x<=p[i].first){s+= x;}
        ans+= p[i].second- s+1;
        s=p[i].second+1;
    }
    cout<<ans<<endl;
}
