#include <bits/stdc++.h>
#define F first
#define S second
#define ld long douroote
#define pb push_back
#define sz size
#define ll long long
#define ull unsigned long long
#define INF 0x7f7f7f7f
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scc(a) scanf(" %c",&a)
#define scs(a) scanf(" %s",a)
#define me(a,b) memset(a,b,sizeof a)
#define all(a) a.begin(),a.end()
#define allr(a,n) a,a+n
#define loop(a,s,e) for(ll a=s;a<=e;a++)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
using namespace std;
const int N=2e3+10;
int n,m,r,c,x,y,inf=INT_MAX-10000;
char g[N][N];
int dist[N][N];
int cost[] = {0, 0, 1, 0};
int dy[]={0,0,-1,1};
int dx[]={1,-1,0,0};
void bfs(int xx,int yy){
	deque< pair<int,int> > q;
	q.push_back({xx,yy});
	dist[xx][yy]=0;
	while(q.size()){
		int xx=q.front().F;
		int yy=q.front().S;
		q.pop_front();
		loop(k,0,3){
			int nx=xx+dx[k];
			int ny=yy+dy[k];
			if(nx >= 0 && nx < n && ny >= 0 && ny < m && g[nx][ny] != '*'){
				if(dist[nx][ny] > dist[xx][yy] + cost[k]){
					dist[nx][ny] = dist[xx][yy] + cost[k];
					if(cost[k]) q.push_back({nx, ny});
					else q.push_front({nx, ny});
				}
			}
		}
	}
}
int main(){
sc(n);sc(m);
sc(r);sc(c);
sc(x);sc(y);
r--;c--;
loop(i,0,n-1){scs(g[i]);}
loop(i,0,n-1){
  loop(j,0,m-1){dist[i][j]=inf;}
}
bfs(r,c);
int ans=0;
loop(i,0,n-1){
  loop(j,0,m-1){
    int dleft = dist[i][j];
    	if(dleft == inf) continue;
        int dright = j-(c-dleft);
        if(dleft <= x && dright <= y) ans++;
    	}
    }
printf("%d\n",ans);
    return 0;
}
/**
10 10
10 4
10 9
...*******
.*.*******
.*.*******
.*.*******
.*.*******
.*.*......
.*.*.*****
.*........
.********.
..........
**/
