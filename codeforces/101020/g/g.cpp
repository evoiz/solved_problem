#include <bits/stdc++.h>
using namespace std;
long long n,a,b;
bool vis[25][25],ok;
char m[25][25];
string con="pie";
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={1,0,-1,1,-1,1,0,-1};
bool inside(int i,int j){return (i>-1&&j>-1&&i<a&&j<b);}
void DFS(int x,int y,int pos){
    if (pos==2&&m[x][y]=='e'){ok=1;return;}
    vis[x][y]=1;
    for (int i=0;i<8;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
            if (inside(nx,ny)&&!vis[nx][ny]&&m[nx][ny]==con[pos+1]){
                DFS(nx,ny,pos+1);
            }
    }
}
int main(){
scanf("%I64d",&n);
while(n--){
scanf("%I64d %I64d",&a,&b);
for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){cin>>m[i][j];}
}
ok=0;
memset(vis,0,sizeof vis);
for(int i=0;i<a && !ok ;i++){
    for(int j=0;j<b && !ok ;j++){
        if(m[i][j]=='p'){DFS(i,j,0);}
}
}
cout<<(ok?"Cutie Pie!\n":"Sorry Man\n");
}
return 0;
}

