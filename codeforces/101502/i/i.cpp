#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N = 1e3,oo=1e9;
int t,n,q,ans,tmp,st,e,f1[13],f2[13];
int vis[N];
vector < int > edag[N];
string s[N];
char in[30];
string read(){
  scanf("%s",in);
  return (string)in;
}
bool ch(int a,int b){
 memset(f1,0,sizeof f1);
 memset(f2,0,sizeof f2);
 for(int i=0;i<s[a].length();i++){
  f1[s[a][i]-'0']++;
 }
 for(int i=0;i<s[b].length();i++){
  f2[s[b][i]-'0']++;
 }
 int ans=0;
 for(int i=0;i<=9;i++){ans+=min(f1[i],f2[i]);}
 return ans==17;
}
void add(int x){
for(int i=1;i<=x;i++){
   if(ch(i,x)){edag[i].push_back(x);edag[x].push_back(i);}
  }
}
void bfs(){
queue <int> q;
q.push(st);
vis[st]=0;
while(!q.empty()){
   int ind=q.front();
   q.pop();
   for(int i=0;i<edag[ind].size();i++){
           if (vis[edag[ind][i]]==-1) {
				vis[edag[ind][i]] = vis[ind]+1;
				q.push(edag[ind][i]);
			}
   }
}
}
int main(){
scanf("%d",&t);
while(t--){
  scanf("%d%d%d",&n,&st,&e);
  for(int i=0;i<N;i++){edag[i].clear();}
  memset(vis,-1,sizeof vis);
  for(int i=1;i<=n;i++){
      s[i]=read();
      add(i);
   }
  if(st==e){printf("0\n");continue;}
   bfs();
   int ans=vis[e];
   printf("%d\n",ans);
}
    return 0;
}
/**
2
5 1 5
11111191111191111911
11181111111111818111
11811171817171181111
11111116161111611181
11751717818314111118
5 1 5
11111191111191111911
11181111111111818111
11811171817171181111
11111116161111611181
11751717818314111118

1
3 1
a
b
c
1

**/
