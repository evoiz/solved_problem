#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

string s;

int cnt=0,t;

bool lower(char ch)
{
    return ch>='a'&&ch<='z';
}

bool upper(char ch)
{
    return ch>='A'&&ch<='Z';
}

int main()
{
    cin >> t;
    while(t--)
    {
        cin >> s;
        if (upper(s[0]))
        {
            cout << "NO\n";continue;
        }
        cnt=1;
        for (int i=0;i<s.length();i++)
        {
            if (lower(s[i])==0&&upper(s[i])==0)
            {
                cnt=8;break;
            }
            if (upper(s[i]))cnt++;
        }
        if (cnt<8)cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
