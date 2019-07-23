#include<bits/stdc++.h>
using namespace std;

using ll = long long;

typedef pair < int , int > ii;
typedef vector < int > vi;
typedef vector < ii > vii;
const int N = 1e5 + 5;
const ll INF = 1e12;

int p[N];

int get(int x){
    if(x == p[x])return x;
    return  p[x] = get(p[x]);
}

void join(int x , int y){

    x = get(x);
    y = get(y);

    if(x == y)return;
    if(rand() & 1)swap(x , y);
    p[x] = y;
}

main(){
    int t;

    scanf("%d" , &t);

    while( t -- ){
        int n , m , q;
        scanf("%d %d %d" , &n , &m , &q);

        for(int i = 0 ; i < N ; i ++)p[i] = i;

        while( m -- ){
            int u , v;
            scanf("%d %d" , &u , &v);
            join(u , v);
        }

        string ans = "";

        while( q -- ){
            int u , v;
            scanf("%d %d" , &u , &v);

            u = get(u);
            v = get(v);

            if(u == v)ans += "1";
            else ans += "0";
        }
        printf("%s\n" , ans.c_str());
    }

    return 0;
}
