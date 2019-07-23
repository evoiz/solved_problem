#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
int m[15],t,sum,a,b,c,d,e;;
int main(){
    scanf("%d",&t);
    for(int co=1;co<=t;co++){
        sum=0;
        for(int i=0;i<10;i++){scanf("%d",&m[i]);sum+=m[i];}
        sort(m,m+10);
        c=(sum/4)-m[0]-m[9];
        a=m[1]-c;
        b=m[0]-a;
        e=m[8]-c;
        d=m[9]-e;
        printf("Case %d: %d %d %d %d %d\n",co,a,b,c,d,e);
    }
}