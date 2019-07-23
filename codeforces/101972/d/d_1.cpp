#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

int t,n,x,y;

int main()
{
    cin>>t;
    while(t--)
    {
        cin >> n >> x >> y;
        if (x>=(n/2)+1&&y>=n/2)
        {
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
    return 0;
}
