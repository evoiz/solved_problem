#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair < int , int > ii;
typedef vector < ii > vii;
typedef vector < int > vi;

const int N = 1e5 + 5;
const ll INF = 1e12 + 5;

int n;
int a[7];

void solve()
{

    for(int i = 0 ; i < 5 ; i ++)
    {
        scanf("%d" , &a[i]);
    }
    sort(a , a + 5);

    printf("%d\n" , a[3] * a[4]);
}

main()
{
    int t;
    scanf("%d" , &t);

    while( t -- )solve();
}
