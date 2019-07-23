#include <bits/stdc++.h>
#define F first
#define S second

using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b)
{
    if (a.F!=b.F)
        return a.F<b.F;
    else
        return a.S<b.S;
}

int n,x,ans,sum;

int main()
{
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> x;
        sum+=x;
    }
    if (sum>5)
    ans+=sum/5;
    else
        ans=1;
    if (sum%5!=0&&sum>5)ans++;
    cout << ans << endl;
    return 0;
}
