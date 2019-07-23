#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

const int N=1e5+5;

int n,q,a[N],t,x,y,type;

set<int>st;

map<int,int>mp;

int main()
{
    scanf("%d",&t);
    while(t--)
    {
        st.clear();
        mp.clear();
        scanf("%d%d",&n,&q);
        for (int i=1;i<=n;i++)
        {
            scanf("%d",a+i);
            if (a[i])
            {st.insert(a[i]);
            mp[a[i]]++;}
        }
        for (int i=0;i<q;i++)
        {
            scanf("%d",&type);
            if (type==2)
            {
                printf("%d\n",st.sz());
            }
            else
            {
                scanf("%d%d",&x,&y);
                mp[a[x]]--;
                if (mp[a[x]]==0)
                st.erase(a[x]);
                mp[y]++;
                a[x]=y;
                if (mp[y]==1&&y!=0)st.insert(y);
            }
        }
    }
    return 0;
}
