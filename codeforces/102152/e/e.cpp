#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

int t,n,m,cost[30];

string s,c,p;

void init()
{
    for (int i=0;i<27;i++)
    {
        cost[i]=1e9;
    }
}

int main()
{
    cin >> t;
    while(t--)
    {
        ll ans=0;
        init();
        cin >> n >> m >> s >> c >> p;
        for (int i=0;i<n;i++)
        {
            cost[s[i]-'a']=min(cost[s[i]-'a'],c[i]-'0');
        }
        for (int i=0;i<m;i++)
        {
            ans+=cost[p[i]-'a'];
        }
        if (ans>=1e9)ans=-1;
        cout << ans << endl;
    }
    return 0;
}
