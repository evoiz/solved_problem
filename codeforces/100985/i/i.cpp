#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define ld long double

using namespace std;

int n,t,l,r,a[100009],pre[100009],suff[100009],nathan,yan;

int main()
{
    cin >> n >> t;
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    if (!n||n==1||n==2)
    {
        cout << "Empate" << endl;
    }
    else
    {
        pre[0]=a[0];
        for (int i=1; i<n; i++)
        {
            pre[i]=a[i]+pre[i-1];
        }
        suff[0]=a[n-1];
        for (int i=1; i<n; i++)
        {
            suff[i]=suff[i-1]+a[n-i-1];
        }
        int pos=0;
        for (int i=0; i<n; i++)
        {
            if (pre[i]>=suff[pos])
                while(pre[i]>=suff[pos]&&suff[pos]<=t&&pos<n)
                {
                    pos++;
                    nathan++;
                }
            if (pre[i]<=t)
            {
                yan++;
            }
        }
    }
    if (nathan>yan)
    {
        cout << "Nathan" << endl;
    }
    else if (yan>nathan)
    {
        cout << "Yan" << endl;
    }
    else cout << "Empate" << endl;
    return 0;
}
