#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

const int N=109;

int n,m,a[N],sum[N][N],freq[N];

bool ok(int l,int r)
{
    int FREQ[N]={0};
    for (int i=1;i<=m;i++)
    {
        FREQ[i]=sum[i][r]-sum[i][l-1];
    }
    for (int i=1;i<=m;i++)
    {
        if (freq[i]!=FREQ[i])return 0;
    }
    return 1;
}

int main()
{
    cin >> n >> m;
    for (int i=1;i<=n;i++)
    {
        cin >> a[i];
        sum[a[i]][i]++;
    }
    for (int i=1;i<=m;i++)cin>>freq[i];
    for (int i=1;i<=m;i++)
    {
        for (int j=2;j<=n;j++)sum[i][j]+=sum[i][j-1];
    }
    /*for (int i=1;i<=m;i++)
    {
        for (int j=1;j<=n;j++)
        cerr << sum[i][j] << ' ';
        cerr << endl;
    }*/
    for (int i=0;i<n;i++)
    {
        for (int j=i;j<n;j++)
        {
            if (ok(i+1,j+1))
            {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
