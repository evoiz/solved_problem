#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=2e5+10;
set<int>adj[N];

int n,m,x,u,k,in[N];
int out[N],timer,pos[N];

vector<int>v;

void dfs(int u,int par){
    pos[u]=v.sz();
    v.pb(u);
    in[u]=++timer;
    for(auto X:adj[u])
        if( X!=par ){
            dfs(X,u);
        }
    out[u]=timer;
}

int main(){
    cin >> n;
     cin>> m;
    for (int i=2;i<=n;i++){
        cin >> x;
        adj[x].insert(i);
    }
    dfs(1,1);
    for (int i=0;i<m;i++)
    {
        cin >> u >> k;
        if (out[u]-in[u]<k-1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << v[pos[u]+k-1] << endl;
        }
    }
    return 0;
}
