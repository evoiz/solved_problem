#include<bits/stdc++.h>
using namespace std;

using ll = long long;
typedef pair < int , int > ii;
typedef vector < ii > vii;
typedef vector < int > vi;
const int N = 1e5 + 5;

int n , m , q;
ii  a[N];
int ans[N];


main(){
    int t;
    scanf("%d" , &t);

    while( t -- ){

        memset(ans , -1 , sizeof ans);

        scanf("%d %d %d" , &n , &m , &q);

        for(int i = 1 ; i <= n ; i ++){
            scanf("%d %d" , &a[i].first , &a[i].second);
        }
        sort(a + 1 , a + n + 1);

        a[n+1] = {m+1 , m+1};
        for(int i = n ; i >= 0 ; i --){
            if(a[i].second < a[i+1].first){
                int diff = a[i+1].first - a[i].second - 1;
                for(int j = 0 ; j <= diff ; j ++){
                    if(ans[j] == -1)
                        ans[j] = a[i+1].first - 1;
                }
            }
        }



        int k;
        while(q --){
            scanf("%d" , &k);

            if(ans[k] == -1){
                printf("-1 -1\n");
            }

            else printf("%d %d\n" , ans[k] - k + 1 , ans[k]);
        }

    }

    return 0;
}

