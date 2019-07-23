#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

int t,n,ans;

string s;

void light(int ind)
{
    //s[ind]='*';
    if (ind-1>-1&&s[ind-1]=='.')s[ind-1]='X';
    if (ind+1<n&&s[ind+1]=='.')s[ind+1]='X';
}

int main()
{
    cin >> t;
    while(t--)
    {
        ans=0;
        cin >> n >> s;
        for (int i=0;i<n;i++)
        {
            if (s[i]=='*')light(i);
        }
        for (int i=0;i<n;i++)
        {
            if (s[i]=='.')
            {
                if (i+1<n&&s[i+1]=='.'){light(i+1);s[i+1]='*';}
                else {light(i);s[i]='*';}
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}