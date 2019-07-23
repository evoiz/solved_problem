#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

const int N=1e5+5;

int n,sum,a[N],ans;

int main()
{
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for (int i=0;i<n;i++)
    {
        if (a[i]>0)sum+=a[i];
        else
        {
            if (abs(a[i])<=sum)sum+=a[i];
            else {ans+=abs(a[i])-sum;sum=0;}
        }
    }
    cout << ans << endl;
    return 0;
}
