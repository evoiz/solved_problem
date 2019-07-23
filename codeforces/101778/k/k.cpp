#include<bits/stdc++.h>
using namespace std;

const int N = 35;

int t, n, m, k;

int extreme;

int solid[N][N];
int relentless[N][N];
int firstP[N];
int last;
bool solved[N][N];
string s;



struct node
{
    int idP;
    int idS;
    int Res;
    string T;
};

vector < node > v;

bool cmp(node nd1, node  nd2)
{
    return nd1.T < nd2.T;
}

main()
{
    scanf("%d",&t);

    while(t--)
    {
        memset(relentless, 0, sizeof relentless);
        memset(firstP, 0, sizeof firstP);
        memset(solved, 0, sizeof solved);
        memset(solid, 0, sizeof solid);
        extreme = 0;
        v.clear();

        scanf("%d %d %d", &n, &m, &k);

        while(k--)
        {
            int idp, ids, res;
            scanf("%d %d %d", &idp, &ids, &res);
            cin >> s;

            node nd;
            nd.idP = idp;
            nd.idS = ids;
            nd.Res = res;
            nd.T = s;
            v.push_back(nd);
        }
        int res, ids, idp;
        sort(v.begin(), v.end(), cmp);
        for(int vv=0; vv < v.size(); vv++)
        {
            res = v[vv].Res;
            ids = v[vv].idS;
            idp = v[vv].idP;
            if(res == 1)
            {
                if(!extreme)extreme = ids;

                if(!firstP[idp])firstP[idp] = ids;


                if(solid[ids][idp] == 0)
                    solid[ids][idp] = 1;

                solved[ids][idp] = 1;

                last = ids;
            }

            else
            {
                solid[ids][idp] = -1;
                relentless[ids][idp]++;
            }

        }



        int sol = -1, mx = 0, sum = 0;
        for(int i=1; i<=m; i++)
        {
            sum = 0;
            for(int j=1; j<=n; j++)
                if(solid[i][j] == 1)sum++;

            if(sum > mx)
            {
                mx = sum;
                sol = i;
            }
        }

        int rel = -1, mxmx = 0;
        mx = 0;

        for(int i=1; i<=m; i++)
        {
            for(int j=1; j<=n ; j++)
                if(solved[i][j])
                    mxmx = max(mxmx, relentless[i][j]);

            if(mxmx > mx)
            {
                mx = mxmx;
                rel = i;
            }
        }

        for(int i=1; i<=n; i++)
        {
            if(firstP[i])
                printf("%d ", firstP[i]);

            else printf("-1 ");
        }
        printf("\n");

        mx = 0;
        if(rel == -1)rel = extreme;
        if(sol == -1)
        {
            for(int i=1; i<=m; i++)
            {
                sum = 0;
                for(int j=1; j<=n; j++)
                    sum += solved[i][j];

                if( sum > mx)
                {
                    mx =  sum;
                    sol = i;
                }
            }
        }

        printf("%d %d %d %d\n", extreme, last, sol, rel);


    }
}