#include <bits/stdc++.h>

using namespace std;

int t,k,m,n,a[110],ans;

int main()
{
    cin >> t;
    while(t--)
    {
        int sum=0;
        ans=0;
        cin >> k >> m >> n;
        for (int i=0;i<n;i++)
        {
            cin >> a[i];
            sum+=a[i];
        }
        sort(a,a+n);reverse(a,a+n);
        int free=k-sum;
        for (int i=0;i<n;i++)
        {
            free+=a[i];
            ans++;
            if (free>=m)
            {
                cout << ans << endl;
                break;
            }
        }
    }
    return 0;
}
