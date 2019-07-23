#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=1e2+8;
int  t,tmp,n,m,q,pre[N][N][504],xa,xb,ya,yb;
set<int> st;
int query(int x1,int y1,int x2,int y2,int num){return pre[x2][y2][num]-pre[x2][y1-1][num]-pre[x1-1][y2][num]+pre[x1-1][y1-1][num];}
int main(){
scanf("%d",&t);
while(t--){
memset(pre,0,sizeof pre);
st.clear();
scanf("%d%d%d",&n,&m,&q);
for(int i=1;i<=n;i++){for(int j=1;j<=m;j++){scanf("%d",&tmp);pre[i][j][tmp]++;st.insert(tmp);}}
for(int num=1;num<=500;num++){
for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= m ; ++j){pre[i][j][num]=pre[i][j][num]+pre[i-1][j][num]+pre[i][j-1][num]-pre[i-1][j-1][num];}
	}
  }
  while(q--){
     scanf("%d%d%d%d",&xa,&ya,&xb,&yb);
     int mid=(xb-xa+1)*(yb-ya+1);
     mid=mid/2ll+(mid%2);
     //cerr<<mid<<endl;
     int sum=0,ans=0;
     for(auto i:st){sum+=1ll*query(xa,ya,xb,yb,i);if(sum>=mid){ans=i;break;}}
     printf("%d\n",ans);
  }
  //cerr<<query(2,2,3,4,1)<<endl;
}
}
/**
1
4 4 2
1 2 3 4
5 1 1 1
6 2 1 1
5 5 5 5
**/
