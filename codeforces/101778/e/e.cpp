#include<bits/stdc++.h>
using namespace std;

/**

    |||||||                                 ||  //
    ||          ||    ||        |||||||     || //
    ||||||      ||    ||       ||           ||//
    ||          ||    ||      ||            || //
    ||          ||    ||       ||           ||  //
    ||          ||||||||        |||||||     ||   //


*/

typedef long long ll;
typedef pair < int , int > ii;
typedef vector < ii > vii;
const int N = 1e5 + 5 , INF = 1e9 + 7;

int t , n , m , dis , coin ,x , y;
struct node
{
    int dx;
    int dis;
    int coin;
};

vector < node > v;

bool cmp(node nd1 , node nd2)
{
    if( nd1.dis != nd2.dis )return nd1.dis < nd2.dis;

    if(nd1.coin != nd2.coin)return nd1.coin > nd2.coin;

    return nd1.dx < nd2.dx;
}

main()
{
    scanf("%d" ,&t);

    while(t--)
    {
        v.clear();

        scanf("%d%d%d" , &n ,&x , &y);

        for(int i=0;i<n;i++)
        {
            scanf("%d%d" , &dis , &coin);
            if(dis <= x && coin >= y)
            {
                node nd;
                nd.dx = i+1;
                nd.dis = dis;
                nd.coin = coin;
                v.push_back(nd);
            }
        }

        if(v.size() == 0)
            printf("-1\n");
        else
        {
            sort(v.begin() , v.end() , cmp);
            printf("%d\n" , v[0].dx);
        }
    }
}