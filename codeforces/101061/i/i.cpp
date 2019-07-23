#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

int t,freq1[30],freq2[30],ans;

string s1,s2;

int main()
{
    cin >> t;
    while(t--)
    {
        ans=0;
        memset(freq1,0,sizeof freq1);
        memset(freq2,0,sizeof freq2);
        cin >> s1 >> s2;
        for (int i=0;i<s1.length();i++)freq1[s1[i]-'a']++;
        for (int i=0;i<s2.length();i++)freq2[s2[i]-'a']++;
        for (int i=0;i<26;i++)
        {
            if (freq1[i]!=freq2[i])
            {
                ans+=abs(freq1[i]-freq2[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
