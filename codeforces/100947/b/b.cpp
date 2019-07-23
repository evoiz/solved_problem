#include <bits/stdc++.h>
using namespace std;
bool rqa[10][10];
string tmp;
bool in(int x,int y){
if (x<0 || x>=8){return 0;}
if (y<0 || y>=8){return 0;}
return 1;
}
bool ok(int x, int y){
int X,Y;
X=x+1;Y=y+1;
while(in(X,Y)){if(rqa[X][Y]){return 0;}X++;Y++;}
////////////////////////////////////////
X=x-1;Y=y+1;
while(in(X,Y)){if(rqa[X][Y]){return 0;}X--;Y++;}
////////////////////////////////////////////////
X=x+1;Y=y-1;
while(in(X,Y)){if(rqa[X][Y]){return 0;}X++;Y--;}
////////////////////////////////////////////////
X=x-1;Y=y-1;
while(in(X,Y)){if(rqa[X][Y]){return 0;}X--;Y--;}
////////////////////////////////////////////////
X=x+1;Y=y;
while(in(X,Y)){if(rqa[X][Y]){return 0;}X++;}
///////////////////////////////////////////////
X=x-1;Y=y;
while(in(X,Y)){if(rqa[X][Y]){return 0;}X--;}
/////////////////////////////////////////////
X=x;Y=y+1;
while(in(X,Y)){if(rqa[X][Y]){return 0;}Y++;}
/////////////////////////////////////////////
X=x;Y=y-1;
while(in(X,Y)){if(rqa[X][Y]){return 0;}Y--;}

return 1;
}
bool ch(){
for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){if(rqa[i][j]){if(!ok(i,j)){return 0;}}}
}
return 1;
}
int t;
int main(){
scanf("%d",&t);
while(t--){
memset(rqa,0,sizeof rqa);
for(int i=0;i<8;i++){cin>>tmp;rqa[tmp[0]-'A'][tmp[1]-'1']=1;}
(ch()?cout<<"Valid"<<endl:cout<<"Invalid"<<endl);
}

}
