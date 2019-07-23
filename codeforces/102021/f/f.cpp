#include<bits/stdc++.h>
using namespace std;


using ll = long long;
typedef pair < int , int > ii;
typedef pair < int , ii  > i3;
typedef vector < int > vi;
typedef vector < ii > vii;
typedef vector < i3 > vi3;

const int N = 2e6 + 5;
const ll INF = (ll)1e12;
const double eps = 1e-9 , PI = acos(-1);

int   ok[N][4];
int  ok2[N][4];

int in[N];
int a[N];

main(){

    int x = 1 , y = 1;

    int turn = 0;
    while( true ){

        if(x > N && y > N)break;

        if(x < N){
            if(ok[x][0] == 0)ok[x][0] = y;
            else ok[x][1] = y;
        }

        if(y < N){
            if(ok[y][0] == 0)ok[y][0] = x;
            else ok[y][1] = x;
        }

        turn ^= 1;
        if(turn){
            x += y;
        }
        else {
            y += x;
        }
    }


    int n;
    scanf("%d" , &n);

    int cnt = 0 , one1 = 0 , one2 = 0;
    for(int i = 1 ; i <= n ; i ++){
        scanf("%d" , &a[i]);
        in[a[i]] = i;
        if(a[i] == 1){
                cnt ++;
                if(one1 == 0)
                    one1 = i;
                else one2 = i;
        }
    }

    if(cnt > 1){
        printf("%d %d\n" , one1 , one2);
        return 0;
    }

    for(int i = 1 ; i <= n ; i ++){
            int val = a[i];

            if(val != 1)
            if(in[ok[val][0]] > 0){
                if(ok[val][0] > val)printf("%d %d\n" , i , in[ok[val][0]]);
                else printf("%d %d\n" , in[ok[val][0]] , i);
                return 0;
            }

            if(in[ok[val][1]] > 0){
                if(ok[val][1] > val)printf("%d %d\n" , i , in[ok[val][1]]);
                else printf("%d %d\n" , in[ok[val][1]] , i);
                return 0;
            }
        }

    printf("impossible\n");
    return 0;
}

