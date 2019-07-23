#include<bits/stdc++.h>
using namespace std;

main(){

    int n;
    scanf("%d" , &n);

    char s[10];
    char ans = 'N';
    while( n -- ){
        scanf("%s" , s);

        if(s[0] == 'l'){
                 if(ans == 'N')ans = 'W';
            else if(ans == 'E')ans = 'N';
            else if(ans == 'S')ans = 'E';
            else if(ans == 'W')ans = 'S';
        }
        else if(s[0] == 'r') {
            if(ans == 'N')ans = 'E';
            else if(ans == 'E')ans = 'S';
            else if(ans == 'S')ans = 'W';
            else if(ans == 'W')ans = 'N';
        }
        else {
                 if(ans == 'N')ans = 'S';
            else if(ans == 'S')ans = 'N';
            else if(ans == 'E')ans = 'W';
            else if(ans == 'W')ans = 'E';
        }
    }

         if(ans == 'N')printf("north\n");
    else if(ans == 'S')printf("south\n");
    else if(ans == 'E')printf("east\n");
    else if(ans == 'W')printf("west\n");
}
