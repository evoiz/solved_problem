#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

int t,casen,freq[30];

string s;

int main()
{
    cin >> t;
    while(t--)
    {
        s="";
        int a[30]={0},sum=0;
        memset(a,0,sizeof a);
        memset(freq,0,sizeof freq);
        while(1)
        {
            string x;
            cin >> x;
            if (x=="*")break;
            s+=x;
        }
        for (int i=0;i<s.length();i++)
        {
            s[i]=tolower(s[i]);
            freq[s[i]-'a']++;
            a[s[i]-'a']++;
        }
        sort(a,a+26);
        reverse(a,a+26);
        //for (int i=0;i<26;i++)cerr << "a[" << i << "]=" << a[i] << endl;
        multiset<int>ms;
        int cnt=0;
        for (int i=0;i<5;i++)ms.insert(a[i]);
        for (int i=25;i>-1;i--)
        {
            if (cnt==5)break;
            if (ms.find(freq[i])!=ms.end()&&freq[i])
            {
                ms.erase(ms.find(freq[i]));
                cnt++;
                sum+=i;
            }
        }
        if (sum>62)cout << "Case " << ++casen << ": Effective" << endl;
        else cout << "Case " << ++casen << ": Ineffective" << endl;
    }
    return 0;
}
/**
3
You can be the greatest
*
You can be the best
You can be the King Kong banging on
your chest
*
zz
*
**/
