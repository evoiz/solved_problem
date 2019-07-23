#include <bits/stdc++.h>
using namespace std;
long long n,m,ans,tmp,xp,np;
int main() {
    cin>>n>>m;
    for (int i = 0; i <= n; i++){
        xp=n-i;
        np=m-2*i;
        if (np>=0) {tmp=i+( min(np,xp/2));ans = max(ans,tmp);}
    }
       cout<<ans<<endl;

}
