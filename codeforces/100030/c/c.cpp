#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

ll n,MAX,mem[209][209],mod=1e9+7;

ll dp(ll pos,ll last)
{
    if (pos==n)
    {
        return 1;
    }
    if (mem[pos][last]!=-1)return mem[pos][last];
    ll ans=0;
    for (ll i=last+1;i<=MAX;i++)
    {
        ans+=dp(pos+1,i);
        ans%=mod;
        ans%=mod;
    }
    ans%=mod;
    return mem[pos][last]=ans;
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    memset(mem,-1,sizeof mem);
    cin >> n >> MAX;
    cout << dp(0,0) << endl;
    return 0;
}
