#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

const int N=6e4+5;

int n,dis[N];

string s[N];

map<string,vector<int>>mp;

char ch[15];

string read()
{
    scanf("%s",ch);
    return (string)ch;
}

vector<int>adj[N];

void build_graph()
{
    for (int i=1; i<=n; i++)
    {
        for (int j=0; j<s[i].length(); j++)
        {
                string tmp=s[i];
                tmp[j]='#';
                if (mp.find(tmp)!=mp.end())
                {
                    int v=i;
                    for(auto u:mp[tmp]){
                    if(u==v){continue;}
                    adj[u].pb(v);
                    }
                }
        }
    }
}

void BFS()
{
    queue<int>q;
    q.push(1);
    dis[1]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for (auto X:adj[u])
        {
            if (dis[X]==-1)
            {
                dis[X]=1+dis[u];
                q.push(X);
            }
        }
    }
}

void start()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
}

void build_path()
{
    int cur=n;
    vector<string>v;
    v.pb(s[n]);
    while(1)
    {
        if (cur==1)
        {
            break;
        }
        for (auto X:adj[cur])
        {
            if (dis[X]==dis[cur]-1)
            {
                v.pb(s[X]);
                cur=X;
                break;
            }
        }
    }
    for (int i=v.sz()-1;i>-1;i--)
    {
        printf("%s\n",v[i].c_str());
    }
}

int main()
{
start();
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
    {
        s[i]=read();
        if(i>1){
          if(s[i].length()>s[1].length()){continue;}
        }
        for(int c=0;c<s[i].length();c++){
          char tt=s[i][c];
          s[i][c]='#';
          if(mp.find(s[i])!=mp.end()){
           for(auto x:mp[s[i]]){
             adj[x].pb(i);
             adj[i].pb(x);
           }
          }

          s[i][c]=tt;
        }
        for(int c=0;c<s[i].length();c++){
          char tt=s[i][c];
          s[i][c]='#';
          mp[s[i]].pb(i);
          s[i][c]=tt;
        }

    }
    memset(dis,-1,sizeof dis);
   /// build_graph();
    BFS();
    if (dis[n]==-1)
    {
        printf("FAIL\n");
        return 0;
    }
    printf("%d\n",dis[n]+1);
    build_path();
    return 0;
}
