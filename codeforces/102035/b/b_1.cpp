#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

const int N=1e5+5;

int n,m,a[N],blah[N],b[N],ans;

bool ok (int x)
{
    int one=(a [x]!=1);
    int gcd=0;
    for (int i=x+1;i<=n;i++)
    {
        one +=(a [i]!=1);
        gcd+=(abs (a [i]-a [i-1])%m!=0);
    }
    if (gcd==0 || one==0) return 0;
    return 1;
}

int bsrh()
{
    int l=0,r=n;
    while(l<r)
    {
        int mid=(l+r+1)/2;
        if (ok(mid))
        {
            l=mid;
        }
        else
        {
            r=mid-1;
        }
    }
    return l;
}

int main()
{
    cin >> n >> m;
    for (int i=1; i<=n; i++)
    {
        cin >> blah[i];
    }
    for (int i=1; i<=n; i++)
    {
        cin >> b[i];
        a[i]=blah[b[i]];
    }
    ans=bsrh();
    cout << ans << endl;
    return 0;
}
