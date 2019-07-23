#include <bits/stdc++.h>

using namespace std;

int n,a[200099],ans;

int main()
{
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
        ans=max(ans,a[i]);
    }
    cout << ans << endl;
    return 0;
}
