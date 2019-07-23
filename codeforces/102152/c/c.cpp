#include<bits/stdc++.h>
using namespace std;

using ll = long long;
typedef pair < int , int > ii;
typedef vector < ii > vii;
typedef vector < int > vi;
const int N = 1e5 + 5;
const ll INF = 1e17;

int n , m;

main(){
    int t;
    scanf("%d" , &t);

    while( t -- ){
        scanf("%d %d" , &n , &m);

        if( ((n&1) && (m&1)) || ( (n%2 == 0) && (m%2 == 0) ) )printf("12\n");
        else printf("2\n");
    }

    return 0;
}

