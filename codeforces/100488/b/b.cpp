#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

int n,l,r,ans[109];

bool b[109];

set<int>st1,st2,st;

int x;

int main()
{
    cin >> n;
    if (n==1)
    {
        cout << "A 1\n";
        return 0;
    }
    for (int i=1;i<=n;i++)
    {
        st.insert(i);
    }
    l=1,r=(n+1)/2;
    for (int i=1;i<=(n+1)/2;i++)
    {
        cout << "Q " << l << " " << r << endl;
        cout.flush();
        if (i==1)
        {
            for (int j=l;j<=r;j++)
            {
                cin >> x;
                b[x]=1;
                st1.insert(x);
            }
        }
        else
        {
            for (int j=l;j<=r;j++)
            {
                cin >> x;
                b[x]=1;
                st2.insert(x);
            }
            for (auto X:st1)
            {
                if (st2.find(X)==st2.end())
                {
                    st.erase(X);
                    ans[l-1]=X;break;
                }
            }
            for (auto X:st2)
            {
                if (st1.find(X)==st1.end())
                {
                    st.erase(X);
                    ans[r]=X;
                    break;
                }
            }
            st1.clear();
            for (auto X:st2)st1.insert(X);
            st2.clear();
        }
        l++,r++;
    }
    if (n==2)
    {
        if (x==1)cout << "A 1 2\n";
        else cout << "A 2 1\n";
        return 0;
    }
    for (int i=1;i<=n;i++)cerr << ans[i] << ' ';
    cerr << endl;
    for (int i=1;i<=n;i++)
    {
        if (!b[i])
        {
            cerr << "i=" << i << endl;
            st.erase(i);
            ans[n]=i;
            break;
        }
    }
    cout << "A ";
    if (!ans[1])ans[1]=*st.begin();
    cout << ans[1];
    for (int i=2;i<=n;i++)
    {
        if (!ans[i])ans[i]=*st.begin();
        cout << ' ' << ans[i];
    }
    cout << endl;
    return 0;
}
