#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

const int N=1e5+5;

int t,n,a[N];

set<int>st;

int bit[35];

void f(int x,int pos)
{
    st.insert(x);
    int b,mn=1e9;
    for (int i=0;i<31;i++)
    {
        if ((1<<i)&x)
        {
            if (mn>bit[i])
            {
                mn=bit[i];
                b=i;
            }
            bit[i]=pos;
        }
    }
    int mask=x;
    for (int i=pos-1;i>mn;i--)
    {
        mask|=a[i];
        st.insert(mask);
    }
}

int main()
{
    scanf("%d",&t);
    while(t--)
    {
        st.clear();
        memset(bit,0,sizeof bit);
        scanf("%d",&n);
        for (int i=1;i<=n;i++)
        {
            scanf("%d",a+i);
        }
        for (int i=1;i<=n;i++)
        {
            f(a[i],i);
        }
        printf("%d\n",st.sz());
    }
    return 0;
}
