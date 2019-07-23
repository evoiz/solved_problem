#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

int t,n,w,q,x,y,z,casen;

string s,s2;

map<string,pair<int,pair<int,int> > >planets;

map<pair<string,string>,bool>hole;

map<string,double>dis;

double calc(string a,string b)
{
    if (hole[{a,b}])
    {
        return 0;
    }
    long double tmp;
    pair<int,pair<int,int> >p1,p2;
    p1=planets[a];
    p2=planets[b];
    ll x1=p1.F,x2=p2.F;
    ll y1=p1.S.F,y2=p2.S.F;
    ll z1=p1.S.S,z2=p2.S.S;
    tmp=(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2))+((z1-z2)*(z1-z2)));
    tmp=sqrt(tmp);
    return tmp;
}

void BFS(string x)
{
    queue<string>q;
    q.push(x);
    while(!q.empty())
    {
        string tmp=q.front();
        q.pop();
        for (auto X:planets)
        {
            if (X.F==tmp)continue;
            if (dis.find(X.F)==dis.end()||dis[X.F]>dis[tmp]+calc(tmp,X.F))
            {
                dis[X.F]=dis[tmp]+calc(tmp,X.F);
                q.push(X.F);
            }
        }
    }
}

int main()
{
    cin >> t;
    while(t--)
    {
        dis.clear();
        hole.clear();
        planets.clear();
        cin >> n;
        for (int i=0; i<n; i++)
        {
            cin >> s >> x >> y >> z;
            planets[s]= {x,{y,z}};
        }
        cin >> w;
        for (int i=0; i<w; i++)
        {
            cin >> s >> s2;
            hole[ {s,s2}]=1;
        }
        cin >> q;
        for (int i=0; i<q; i++)
        {
            cin >> s >> s2;
            if (!i)
            {
                cout << "Case " << ++casen << ":\n";
            }
            dis.clear();
            dis[s]=0.0;
            BFS(s);
            long long res=1ll*round(dis[s2]) ;
            cout << "The distance from " << s << " to " << s2 << " is " <<res << " parsecs." << endl;
        }
    }
    return 0;
}
