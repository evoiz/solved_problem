#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

int n,m;


pair<int,int>R[15],B[15];

pair<pair<int,int>,pair<int,int> >p[15];

int main()
{
    cin >> n >> m;
    for (int i=0; i<n; i++)
    {
        cin >> R[i].F >> R[i].S;
    }
    for (int i=0; i<m; i++)
    {
        cin >> B[i].F >> B[i].S;
    }
    if (n!=m)
    {
        cout << "No\n";
        return 0;
    }
            cout << "Yes\n";

    return 0;
}
