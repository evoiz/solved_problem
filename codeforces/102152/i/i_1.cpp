#include<bits/stdc++.h>
using namespace std;

const int N = 1e4 + 4;

int a[N];

main(){

    int t;

    scanf("%d" , &t);

    while( t -- ){
        int n , k;
        scanf("%d %d" , &n , &k);


        int sum = 0;
        for(int i = 0 ; i < n ; i ++){
            scanf("%d" , &a[i]);
        }
        sort(a , a + n);

        for(int i = 0 ; i < n ; i ++){
            if(k > 0){
                if(a[i] < 0){
                    k --;
                    a[i] = -a[i];
                }
            }
        }

        sort(a , a + n);

        if(k&1)a[0] = -a[0];

        for(int i = 0 ; i < n ; i ++)sum += a[i];

        printf("%d\n" , sum);
    }

    return 0;
}
