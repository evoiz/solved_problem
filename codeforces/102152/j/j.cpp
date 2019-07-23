#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

const int N=1e3+5;

int t,n,m,a[N][N],b[N][N],ANS[N][N],ans,cnt;

map<int,int>freq[N];

void init()
{
    ans=0;
    cnt=0;
    for (int i=0;i<n;i++)
    freq[i].clear();
    memset(ANS,-1,sizeof ANS);
}

void sol(int i)
{
    for (int j=0;j<m;j++)
    {
        if (freq[i].find(ANS[i-1][j])!=freq[i].end())
        {
            freq[i][ANS[i-1][j]]--;
            if (freq[i][ANS[i-1][j]]==0)freq[i].erase(ANS[i-1][j]);
            ANS[i][j]=ANS[i-1][j];
        }
    }
    int in=0;
    for (int j=0;j<m;j++)
    {
        if (ANS[i][j]!=-1)continue;
        auto it=freq[i].begin();
        while(it->S==0)
        {
            it++;
        }
        ANS[i][j]=it->F;
        freq[i][it->F]--;
    }
}

int main()
{
    scanf("%d",&t);
    while(t--)
    {
        init();
        scanf("%d%d",&n,&m);
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
                freq[i][a[i][j]]++;
            }
        }
        for (int i=0;i<m;i++)
        {
            ANS[0][i]=a[0][i];
        }
        sort(ANS[0],ANS[0]+m);
        for (int i=1;i<n;i++)
        {
            sol(i);
        }
        for (int i=1;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                if (ANS[i][j]==ANS[i-1][j])ans++;
            }
        }
        printf("%d\n",ans);
        /*for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                cerr << ANS[i][j] << ' ';
                if (ANS[i][j]==ANS[i-1][j])ans++;
            }
            cerr << endl;
        }*/
    }
    return 0;
}
/*
3 6
4 1 2 2 2 3
5 3 1 2 4 4
4 4 2 1 3 3
*/
