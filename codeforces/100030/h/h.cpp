#include<bits/stdc++.h>
using namespace std;\

const int N = 1e5 + 5;
int freq[200];

main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    int k;
    char s[N];

    scanf("%d %s" , &k , s);

    int p1 = 0 , p2 = 0, diff = 0, mx = 0;
    int L = 0 , R = 0;

    int n = strlen(s);
    for( ; p2 < n ; ){
        if(freq[ s[p2] ] == 0)diff ++;
        freq[ s[p2] ] ++;

        while(diff > k){
            freq[ s[p1] ] --;
            if(freq[ s[p1] ] == 0)diff --;
            p1 ++;
        }

        if(p2 - p1 + 1 > mx){
            mx = p2 - p1 + 1;
            L = p1 + 1 , R = p2 + 1;
        }
        p2 ++;
    }

    printf("%d %d\n" , L , R);
}
