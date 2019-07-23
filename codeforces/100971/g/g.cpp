#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
int x,y,a,b,c,d;
bool ans;
bool ok(int aa,int bb,int cc,int dd){return((aa+cc<=x && max(bb,dd)<=y)||(bb+dd<=y && max(aa,cc)<=x));}
int main(){
        scanf("%d%d%d%d%d%d",&x,&y,&a,&b,&c,&d);
        ans|=ok(a,b,c,d);
        ans|=ok(a,b,d,c);
        ans|=ok(b,a,c,d);
        ans|=ok(b,a,d,c);
        printf(!ans?"NO":"YES");
    return 0;
}
/**
12 20
14 7
5 6

**/
