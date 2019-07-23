#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

int n,a[100100],m,x,y,ans=-1;

map<int,int>mp;

set<int>st;

int main()
{
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%d",a+i);
        mp[a[i]]++;
        st.insert(a[i]);
    }
    bool b=0;
    if (st.sz()==1)
    {
        b=1;
        ans=0;
    }
    scanf("%d",&m);
    for (int i=1;i<=m;i++)
    {
        scanf("%d%d",&x,&y);
        if (b)continue;
        mp[a[x]]--;
        if (mp[a[x]]==0)st.erase(a[x]);
        a[x]=y;
        mp[y]++;
        if (mp[y]==1)
        st.insert(y);
        if (st.sz()==1)
        {
            b=1;
            ans=i;
        }
    }
    printf("%d\n",ans);
    return 0;
}
