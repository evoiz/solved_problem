#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair < int , int > ii;
typedef pair < int , ii > i3;
typedef vector < i3 > vi3;
typedef vector < ii > vii;
typedef vector < int > vi;

const int N = 1010;
const ll INF = 1e15;
const double eps = 1e-9 , PI = acos(-1);

int n , m;
int up = 0 , down = 0 , both = 0 , none = 0;
char a[3][N];

main(){
    scanf("%s%s" , a[0] , a[1]);
    int n = strlen(a[0]);
    for(int i = 0 ; i < n ; i ++){
        if( (a[0][i] == '#') && (a[1][i] == '#'))both ++;
        else if((a[0][i] == '#') && (a[1][i] == '.'))up ++;
        else if((a[0][i] == '.') && (a[1][i] == '#'))down ++;
        else none ++;
    }

    if((up > 0) && (down > 0) && (both == 0)){
        printf("NO\n");
        return 0;
    }
    printf("YES\n");

    int i = 0;
    //cout << up << " " << down << " " << both << " " << none << endl;
    for(; i < up ; i ++){
        a[0][i] = '#';
        a[1][i] = '.';
    }

    for(; i < up + both ; i ++){
        a[0][i] = '#';
        a[1][i] = '#';
    }

    for(; i < up + both + down ; i ++){
        a[0][i] = '.';
        a[1][i] = '#';
    }

    for(; i < n ; i ++){
        a[0][i] = '.';
        a[1][i] = '.';
    }

    printf("%s\n%s\n" , a[0] , a[1]);
    return 0;
}

