#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=1e5+6;
bool ch(int x,int y){
cerr<<x<<" "<<y<<endl;
if(x<0 || x>7){return 0;}
if(y<0 || y>7){return 0;}
return 1;
}
string s;
int xx,yy,ans,
dx[]={0, 0,-1,1,1, 1,-1,-1},
dy[]={1,-1, 0,0,1,-1,1 ,-1};
int main(){
cin>>s;
yy=s[0]-'a';xx=s[1]-'1';
cerr<<xx<<" "<<yy<<endl;
for(int i=0;i<8;i++){ans+=ch(xx+dx[i],yy+dy[i]);}
printf("%d",ans);
return 0;
}
