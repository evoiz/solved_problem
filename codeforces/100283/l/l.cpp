#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

int t,q,len,x,y,z,casen=1;

ll adder,multi;

char ch;

vector<int>v[30];

void init()
{
    for (int i=0;i<30;i++)v[i].clear();
}

int main()
{
    freopen("mahdi.in","r",stdin);
    scanf("%d",&t);
    while(t--)
    {
        init();
        scanf("%s %d %lld %lld",&ch,&len,&multi,&adder);
        string s="";
        s+=ch;
        for (ll i=1; i<len; i++)
        {
            ll LOL=(s[i-1]-'a');
            ll tmp=((LOL*multi)+(i*adder));
            tmp%=26;
            char HELL=char(tmp+97);
            s+=HELL;
            v[HELL-'a'].pb(i);
        }
        scanf("%d",&q);
        printf("Case %d:\n",casen++);
        while(q--)
        {
            scanf("%s %d %lld %lld",&ch,&len,&multi,&adder);
            string emp="";
            emp+=ch;
            for (ll i=1; i<len; i++)
            {
                ll LOL=(emp[i-1]-'a');
                ll tmp=((LOL*multi)+(i*adder));
                tmp%=26;
                char HELL=char(tmp+97);
                emp+=HELL;
            }
            int now=0;
            bool check=0;
            for (ll i=0;i<len;i++)
            {
                if (v[emp[i]-'a'].sz()==0)
                {
                    check=1;
                    printf("REPEAT\n");
                    break;
                }
                auto it=lower_bound(v[emp[i]-'a'].begin(),v[emp[i]-'a'].end(),now);
                if (it==v[emp[i]-'a'].end())
                {
                    check=1;
                    printf("REPEAT\n");
                    break;
                }
                else
                {
                    now=*it;
                    now++;
                }
            }
            if (!check)
            {
                printf("BRAVO\n");
            }
        }

    }
    return 0;
}
