#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

int t,n,m,casen=1;

string s;

int main()
{
    cin >> t;
    while(t--)
    {
        int cnt=0;
        cin >> n >> m;
        for (int i=0;i<n;i++)
        {
            cin >> s;
            if (s.find("**")<=s.length())cnt++;
        }
        if (cnt==2)
        {
            cout << "Case " << casen++ << ": Zero" << endl;
        }
        else
        {
            cout << "Case " << casen++ << ": Eight" << endl;
        }
    }
    return 0;
}
