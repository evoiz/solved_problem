#include<bits/stdc++.h>
using namespace std;

typedef pair < char , char > cc;
typedef vector < pair < int , cc > > vc;
const int N = 20;

vc player1 , player2;
vector < int > adj[N];

int t , n , m;
string s;
queue < int > q;
int p2 = 0  , p1 = 0;
bool vis[N] , done[N];


void dfs(int u)
{
    vis[u] = 1;
    bool leaf = 1;

    for(auto v : adj[u])
        if(!vis[v]){
            leaf = 0;
            dfs(v);
        }

    if(leaf)
    {
        //cout << "leaf = " << u << endl;
        if(u > n)p2 = 1;
        else p1 = 1;
    }
}

main()
{
    scanf("%d" , &t);

    for(int tt = 1 ;tt <= t ; tt++)
    {
        memset(vis , 0 , sizeof vis);
        memset(done , 0 , sizeof done);
        p1 = p2 = 0;

        for(int i=0;i<N;i++)
                adj[i].clear();
        player1.clear();
        player2.clear();

        scanf("%d" , &n);
        getline(cin , s);

        int num = 1;
        for(int i=1;i<=n;i++)
        {
            getline(cin , s);
            char c1 = s[0];
            char c2 = s[ s.length() - 1 ];
            player1.push_back({num , {c1 , c2}});
            num ++;
        }

        scanf("%d" , &m);
        getline(cin , s);

        for(int i=1;i<=m;i++)
        {
            getline(cin , s);
            char c1 = s[0];
            char c2 = s[ s.length() - 1 ];
            player2.push_back({num , {c1 , c2}});
            num ++;
        }

        for(int i=0;i<player1.size();i++)
        {
            int dx1 = player1[i].first;
            char ch1 = player1[i].second.second;

            for(int j=0;j<player2.size();j++)
            {
                int dx2 = player2[j].first;
                char ch2 = player2[j].second.first;

                if(ch1 == ch2)
                    adj[dx1].push_back( dx2 );
            }
        }

        for(int i=0;i<player2.size();i++)
        {
            int dx1 = player2[i].first;
            char ch1 = player2[i].second.second;

            for(int j=0;j<player1.size();j++)
            {
                int dx2 = player1[j].first;
                char ch2 = player1[j].second.first;

                if(ch1 == ch2)
                    adj[dx1].push_back( dx2 );
            }
        }

        for(int i=0;i<player1.size();i++)
        {
            int dx = player1[i].first;

            if(!done[dx]){
                    done[dx] = 1;
                    memset(vis , 0 , sizeof vis);
                    //cout << "dfs(" << dx << ")\n\n";
                    dfs(dx);
                    //cout << endl << p1 << " " << p2 << endl << endl;
            }
        }

        if(p1 || p2 == 0)printf("Game %d: player1\n" , tt);
        else printf("Game %d: player2\n" , tt);
    }
}
