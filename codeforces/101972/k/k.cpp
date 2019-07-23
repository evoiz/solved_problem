#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

int t,n;

string a,b,B;

int main()
{
    cin>>t;
    while(t--)
    {
        vector<int>v;
        cin >> n >> a >> b;
        B=b;
        for (int i=0;i<n;i++)
        {
            if (a[i]!=b[i])
            {
                v.pb(i);
            }
        }
        char tmp;
        for (int i=1;i<v.sz();i++)
        {
            B[v[i]]=b[v[i-1]];
        }
        if (v.sz())
        {
            B[v[0]]=b[v[v.sz()-1]];
        }
        if (B==a)
        {
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
    return 0;
}