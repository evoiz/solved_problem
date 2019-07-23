#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

typedef pair < ll , ll > ii;
typedef pair < ll , ii > i3;
typedef vector < i3 > vi3;
typedef vector < ii > vii;

const ll N = 110 , INF = 1e12;

priority_queue < i3 , vi3 , greater < i3 > > pq;

vi3 adj[N];
ll walk[N] , car[N];

int n , m;

void init()
{
    for(int i = 0 ; i < N ; i ++){
        adj[i].clear();
        walk[i] = car[i] = INF;
    }
}

void djk(ll u)
{
    walk[u] = 0;
    car[u] = 0;

    pq.push( { walk[u] , { car[u] , u } });

    while( !pq.empty() )
    {
        u = pq.top().second.second;

        pq.pop();

        for(auto A : adj[u])
        {
            ll v = A.first;
            ll w = A.second.first;
            ll k = A.second.second;

            if(k == 1)
            {
                if(w + walk[u] < walk[v])
                {
                    walk[v] = w + walk[u];
                    car[v] = car[u];
                    pq.push( { walk[v] , { car[v] , v } } );
                }
                else if(w + walk[u] == walk[v])
                {
                    if(car[u] < car[v])
                    {
                        car[v] = car[u];
                        pq.push({ walk[v] , { car[v] , v } });
                    }
                }
            }

            else
            {
                if(walk[u] < walk[v])
                {
                        car[v] = car[u] + w;
                        walk[v] = walk[u];
                        pq.push( { walk[v] , { car[v] , v } } );
                }
                else if(walk[u] == walk[v])
                {
                    if(car[u] + w < car[v])
                    {
                        car[v] = car[u] + w;
                        walk[v] = walk[u];
                        pq.push( { walk[v] , { car[v] , v } } );
                    }
                }
            }

        }
    }
}

main()
{
    int t;

    scanf("%d", &t);


    while( t -- )
    {
        init();

        scanf("%lld %lld", &n , &m);

        ll u , v , c , k;
        for(int i = 0 ; i < m ; i ++)
        {
            scanf("%lld %lld %lld %lld" , &u , &v , &c , &k);

            adj[u].push_back( { v , {c , k} });
            adj[v].push_back( { u , {c , k} });
        }

        scanf("%lld %lld" , &u , &v);

        djk(u);

        if( (walk[v] == INF) && (car[v] == INF) ){
            printf("-1\n");
            continue;
        }

        //printf("walk[%lld] = %lld , car[%lld] = %lld\n" , v , walk[v] , v , car[v]);

        if(walk[v] == INF)walk[v] = 0;
        if(car[v] == INF)car[v] = 0;

        printf("%lld %lld\n" , walk[v] , walk[v] + car[v]);

    }
}
