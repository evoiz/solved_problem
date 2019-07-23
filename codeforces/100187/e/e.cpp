#include<bits/stdc++.h>
using namespace std;

typedef pair < int , int > ii;
const int N = 550;

int n , m;

char a[N][N] , b[N][N];
bool visa[N][N] , visb[N][N];

int disa[N][N] , disb[N][N] , disAB[N][N];

queue < ii > q;

int dx[] = {0 , 0 , 1 , -1};
int dy[] = {1 , -1 , 0 , 0};

bool inside(int x , int y)
{
    return ( (x >= 0) && (x < n) && (y >= 0) && (y < m) );
}

void bfsA()
{
    q.push({0 , 0});

    while( !q.empty() )
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i = 0 ; i < 4 ; i ++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(!inside(nx , ny))continue;
            if(a[nx][ny] == '#')continue;

            if(!visa[nx][ny])
            {
                visa[nx][ny] = 1;

                disa[nx][ny] = disa[x][y] + 1;

                q.push( {nx , ny} );
            }
        }
    }
}

void bfsB()
{
    q.push({0 , 0});

    while( !q.empty() )
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i = 0 ; i < 4 ; i ++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(!inside(nx , ny))continue;
            if(b[nx][ny] == '#')continue;

            if(!visb[nx][ny])
            {
                visb[nx][ny] = 1;

                disb[nx][ny] = disb[x][y] + 1;

                q.push( {nx , ny} );
            }
        }
    }
}

void bfsAB()
{
    q.push({0 , 0});

    visa[0][0] = visb[0][0] = 1;

    while( !q.empty() )
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i = 0 ; i < 4 ; i ++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(!inside(nx , ny))continue;

            if(a[nx][ny] == '#')continue;
            if(b[nx][ny] == '#')continue;

            if( (!visa[nx][ny]) && (!visb[nx][ny]) )
            {
                visb[nx][ny] = 1;
                visa[nx][ny] = 1;

                disAB[nx][ny] = disAB[x][y] + 1;

                q.push( {nx , ny} );
            }
        }
    }
}

void init()
{

    memset(visa , 0 , sizeof visa);
    memset(visb , 0 , sizeof visb);
}


main()
{

    scanf("%d %d" , &n , &m);


    for(int i = 0 ; i < n ; i ++)scanf("%s" , a[i]);
    for(int i = 0 ; i < n ; i ++)scanf("%s" , b[i]);

    if (n==1&&m==1)
    {
        printf("YES\n");
        return 0;
    }

    disa[n-1][m-1] = -1;
    disb[n-1][m-1] = -1;
    disAB[n-1][m-1] = -1;

    bfsA();
    bfsB();

    init();

    bfsAB();

    if( ((disa[n-1][m-1] == disAB[n-1][m-1]) && (disb[n-1][m-1] == disAB[n-1][m-1])) && (disAB[n-1][m-1] != -1) )
        printf("YES\n");

    else
        printf("NO\n");
}
