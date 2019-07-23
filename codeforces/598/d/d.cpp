#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=1e3+10;
char ch[N][N];
int dp[N][N],vis[N][N],n,k,m,x,y,
dx[]={1,-1,0,0},
dy[]={0,0,-1,1};
bool in(int x,int y){
if(x<0 || x>=n || y<0 || y>=m){return 0;}
return 1;
}
int cost(int x,int y){
int ans=0;
for(int i=0;i<4;i++){
    if(!in(x+dx[i],y+dy[i])){continue;}
    ans+=(ch[x+dx[i]][y+dy[i]]=='*');
}
return ans;
}
queue<pair<int,int> >q;
int bfs(int x,int y){
q.push({x,y});
vis[x][y]=1;
int res=0;
while(q.size()){
    int X=q.front().F;
    int Y=q.front().S;
    q.pop();
    res+=cost(X,Y);
    for(int i=0;i<4;i++){
        if(!in(X+dx[i],Y+dy[i]) || (ch[X+dx[i]][Y+dy[i]]=='*') || vis[X+dx[i]][Y+dy[i]]){continue;}
        ///cerr<<X<<" "<<Y<<" "<<cost(X,Y)<<endl;
       //// res+=cost(X+dx[i],Y+dy[i]);
        vis[X+dx[i]][Y+dy[i]]=1;
        q.push({X+dx[i],Y+dy[i]});
    }

}
q.push({x,y});
dp[x][y]=res;
while(q.size()){
    int X=q.front().F;
    int Y=q.front().S;
    q.pop();
    for(int i=0;i<4;i++){
        if(!in(X+dx[i],Y+dy[i]) || (ch[X+dx[i]][Y+dy[i]]=='*') || dp[X+dx[i]][Y+dy[i]]!=-1){continue;}
        dp[X+dx[i]][Y+dy[i]]=res;
        q.push({X+dx[i],Y+dy[i]});
    }

}

return res;
}
string s;
int main(){
    memset(dp,-1,sizeof dp);
    scanf("%d%d%d",&n,&m,&k);
    for(int i=0;i<n;i++){
      cin>>s;
      for(int j=0;j<m;j++){ch[i][j]=s[j];}
    }
    for(int i=0;i<k;i++){
        scanf("%d%d",&x,&y);
        x--;y--;
        if(dp[x][y]!=-1){printf("%d\n",dp[x][y]);continue;}
        printf("%d\n",bfs(x,y));

    }
}
/**

5 6 4
******
*..*.*
******
*....*
******
2 2
2 3
2 5
4 3

**/
