#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N = (1e3) + 5;
bool edg[9][9];
int a,b,c;
void add(int x,int y){edg[x][y]=1;edg[y][x]=1;}
void del(int x,int y){edg[x][y]=0;edg[y][x]=0;}
int con(){int ans=0;for(int i=0;i<9;i++)for(int j=0;j<9;j++)ans+=edg[i][j];return ans;}
int main(){
    scanf("%d%d%d",&a,&b,&c);
    add(a,b);add(b,c);add(c,a);
    scanf("%d%d%d",&a,&b,&c);
    del(a,b);del(b,c);del(c,a);
    a=con();
    printf("%d",a);
    return 0;
}
