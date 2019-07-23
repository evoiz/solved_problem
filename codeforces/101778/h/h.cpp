#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

int n,m,x,diff,ans;

string s;
const int N=1e5+10;
char in[N];
string read(){scanf("%s",in);return (string)in;}
char ch;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ans=0;
        diff=0;
        scanf("%d%d",&n,&m);
        s=read();
        for (int i=0;i<n/2;i++)
        {
            if (s[i]!=s[n-i-1])diff++;
        }
        for (int i=0;i<m;i++)
        {
            scanf("%d %c",&x,&ch);
            x--;
            //cerr<<ch<<endl;
            if (n%2&&x==n/2){if (!diff)ans++;continue;}
            if (s[x]!=s[n-x-1]&&ch==s[n-x-1])diff--;
            else if (s[x]==s[n-x-1]&&ch!=s[n-x-1])diff++;
            s[x]=ch;
            if (!diff)ans++;
        }
       printf("%d\n",ans);
    }
    return 0;
}