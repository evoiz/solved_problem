#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

const int N=1e3+5;

int n,a[N],t,x;

int main()
{
    cin >> t;
    while(t--)
    {
        cin >> x >> n;
        if (x<n)
        {
            cout << -1 << endl;
            continue;
        }
        memset(a,0,sizeof a);
        int tmp=x/n,rem=x%n;
        for (int i=n-1;i>-1;i--)
        {
            if (rem==0)break;
            a[i]++;rem--;
        }
        cout << a[0]+tmp;
        for (int i=1;i<n;i++)
        {
            cout << ' ' << a[i]+tmp;
        }
        cout << endl;
    }
    return 0;
}
