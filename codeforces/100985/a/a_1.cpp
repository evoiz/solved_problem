#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define ld long double

using namespace std;

ll t,a,b;

int main()
{
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        if (__gcd(a,b)>1)
        {
            cout << "Sim" << endl;

        }
        else
            cout << "Nao" << endl;
    }
    return 0;
}
