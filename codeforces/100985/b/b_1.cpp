#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define ld long double
using namespace std;
long long  n,x;
int main(){
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> x;
    }
    int ans=log2(n)+1;
    cout<<ans<<endl;
    return 0;
}
