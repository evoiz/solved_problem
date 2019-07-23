#include<bits/stdc++.h>
using namespace std;



main(){
    int t;

    scanf("%d" , &t);

    while( t -- ){
        string s;
        cin >> s;

        bool f = 0;
        for(int i = 1 ; s[i] ; i ++){
            if(s[i] == s[i-1] + 1 || s[i] == 'a' && s[i-1] == 'z')continue;
            else f = 1;
        }

        if(f)printf("NO\n");
        else printf("YES\n");
    }
}
