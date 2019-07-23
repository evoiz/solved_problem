#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

int t,n,a[109],ans,mx;

int main()
{
    cin >> t;
    while(t--)
    {
        mx=0,ans=0;
        cin >> n;
        for (int i=0;i<n;i++)
        {
            cin >> a[i];
            mx=max(mx,a[i]);
        }
        int tmp=100-mx;
        for (int i=0;i<n;i++)
        {
            if (a[i]+tmp>49)ans++;
        }
        cout << ans << endl;
    }
    return 0;
}