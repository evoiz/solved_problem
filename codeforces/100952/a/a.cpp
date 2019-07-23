#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

int h,m,s,x,y,t;

int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&h,&m,&s);
        x=h*3600+m*60+s;
        scanf("%d%d%d",&h,&m,&s);
        y=h*3600+m*60+s;
        if (y<x)
        {
            printf("Player2\n");
        }
        else if (y>x)
        {
            printf("Player1\n");
        }
        else
        {
            printf("Tie\n");
        }
    }
    return 0;
}
