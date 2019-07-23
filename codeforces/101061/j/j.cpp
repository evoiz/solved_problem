#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

const int N=1e5+5;

ll t,n,m,a[N],ans[N],x,y,wasted;

int main()
{
    cin >> t;
    while(t--)
    {
        wasted=0;
        memset(ans,0,sizeof ans);
        cin >> n >> m;
        for (int i=1;i<=n;i++)
        {
            cin >> a[i];
        }
        for (int i=0;i<m;i++)
        {
            cin >> x >> y;
            ans[x]+=y;
        }
        for (int i=1;i<n;i++)
        {
            if (a[i]<ans[i])
            {
                ans[i+1]+=ans[i]-a[i];
                ans[i]=a[i];
            }
        }
        if (ans[n]>a[n])
        {
            wasted=ans[n]-a[n];
            ans[n]=a[n];
        }
        cout << wasted << endl;
        cout << ans[1];
        for (int i=2;i<=n;i++)
        {
            cout << " " << ans[i];
        }
        cout << endl;
    }
    return 0;
}
