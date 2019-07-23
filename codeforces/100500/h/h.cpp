#include<bits/stdc++.h>
using namespace std;

const int N = 1010 , INF = -1e9;

int t , n , m;

int a[N][N];
int mem[N][N];

int go(int x , int y)
{
    if( x == n-1 && y == m-1 )return a[x][y];

    if(x >= n || y >= m)return INF;

    if(mem[x][y]!=INF)return mem[x][y];

    return mem[x][y] = a[x][y] + max( go(x+1 , y) , go(x , y+1) );
}

main()
{
    scanf("%d" , &t);

    for(int tt = 1; tt <= t ;tt++)
    {
        for(int i=0;i<N;i++)
            for(int j=0;j<N;j++)
                mem[i][j] = INF;
        scanf("%d%d" , &n ,&m);

        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                scanf("%d" , &a[i][j]);
        printf("Case %d: %d\n" ,tt , go(0 , 0));

    }
}
