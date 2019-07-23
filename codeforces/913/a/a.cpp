#include <bits/stdc++.h>

using namespace std;
long long n,k,nn,p,ans,tmp;
int main(){
    cin>>n>>k;
    n=min(30ll,n);
    p=1ll<<(n);
    ans=(long long)(k%p);
    cout<<ans<<endl;
    return 0;
}