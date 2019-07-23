#include <bits/stdc++.h>
using namespace std;
long long n,a,b,c,d,ans,y,z,w;
int main() {
    cin>>n>>a>>b>>c>>d;
    for (int i=1;i<=n;i++) {
         y = i + b - c;
         z= i + a - d;
        w = a + y - d;
        if (1 <= y && y <= n && 1 <= z && z <= n && 1 <= w && w <= n) {ans++;}
    }
    ans *= n;

    cout << ans << endl;
}
