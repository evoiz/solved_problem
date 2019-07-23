#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair < int , int > ii;
typedef vector < ii > vii;
const int N = 2e5 + 5;
const ll INF = 1e12 + 7;

int n , m , k , cnt = 0 , x;

main(){
    scanf("%d %d %d" , &n, &m , &k);

    bool okM = 0;
    for(int i = 0 ; i < n ; i ++){


        scanf("%d" , &x);
        if(x == m)okM = 1;
        if(x > m)cnt ++;
    }

    if( (k == 0) && (!okM) )printf("NO\n");
    else printf("%s\n" , (cnt > k ? "NO" : "YES"));

}

