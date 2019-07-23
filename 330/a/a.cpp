#include <bits/stdc++.h>

using namespace std;

int all[100][100];
int n,m,ans;
int  ch(int x,bool etjah){
if(etjah){for(int i=0;i<m;i++){if(all[x][i]==3){return 0;}}return 1;}
if(!etjah){for(int i=0;i<n;i++){if(all[i][x]==3){return 0;}}return 1;}
}
void solve(){
for(int i=0;i<n;i++){
    if(ch(i,1)){for(int j=0;j<m;j++){if(all[i][j]==0){ans++;all[i][j]=1;}}}
}
////cout<<endl;
for(int i=0;i<m;i++){
    if(ch(i,0)){for(int j=0;j<n;j++){if(all[j][i]==0){ans++;all[j][i]=1;}}}
}
//////cout<<endl;
}
void print(){
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){cout<<all[i][j]<<" ";}
    cout<<endl;
}
}
int main()
{
   cin>>n>>m;
   memset(all,0,sizeof all);
   string in;
   for(int i=0;i<n;i++){
    cin>>in;
     for(int j=0;j<m;j++){
        if(in[j]=='S'){all[i][j]=3;}
     }
   }
   solve();
   ////print();
cout<<ans<<endl;
    return 0;
}
/*n ++ x
  m ++ y
  0 ++ twal
  1 ++ 3ard
  3 4
S...
....
..S.


7 3
S..
S..
S..
S..
S..
S..
S..
*/
