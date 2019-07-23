#include <bits/stdc++.h>
using namespace std;
char c[11][11];
int m,n;
bool ok(int x,int y){
    bool ns=0;
 if(x+1<m){ns=ns||(c[x+1][y]=='P');}
 if(x-1>=0){ns=ns||(c[x-1][y]=='P');}
 if(y+1<n){ns=ns||(c[x][y+1]=='P');}
 if(y-1>=0){ns=ns||(c[x][y-1]=='P');}
 ///cout<<x<<"\t"<<x<<"\t"<<ns<<endl;
 return ns;
}
int ans(){
    int res=0;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){if(c[i][j]=='W'){res+=ok(i,j);}}
    }
return res;
}
int main(){
cin>>m>>n;
for(int i=0;i<m;i++){cin>>c[i];}
cout<<ans()<<endl;
return 0;
}
/**
**/
