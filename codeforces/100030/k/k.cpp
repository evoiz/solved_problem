#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

string s;

int n,mem[1009][5];

int dp(int pos,int last)
{
    if (pos==n)
    {
        return 0;
    }
    if (mem[pos][last]!=-1)return mem[pos][last];
    int ans=dp(pos+1,last);
    if (s[pos]=='3'&&last==1)
    {
        ans=max(ans,dp(pos+1,last));
    }
    else
    {
        ans=max(ans,1+dp(pos+1,s[pos]-'0'));
    }
    return mem[pos][last]=ans;
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    memset(mem,-1,sizeof mem);
    cin >> s;
    n=s.length();
    cout << n-dp(0,0) << endl;
    return 0;
}
