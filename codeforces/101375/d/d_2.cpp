#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
long long sum,ans,sums[N],n,m[N];
int main() {
    cin.sync_with_stdio(0);
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
	for(int i=0;i<n;i++){cin>>m[i];sum+=m[i];sums[i]=sum;}
    for(int i=0;i<n;i++){ans+=m[i]*(sum-sums[i]);}
cout<<ans<<endl;
}
/**
**/
