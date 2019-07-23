#include <bits/stdc++.h>
using namespace std;
string con[]={".XXXX","X.XXX","XX.XX","XXX.X","XXXX."};
char m[12][12];
string s,tmp;
bool ch(string in){
    for(int i=0;i<5;i++){
   size_t found=in.find(con[i]);
   if (found!=std::string::npos){return 1;}
    }
    return 0;
}
bool is(int x,int y){
tmp.clear();
bool ans=0;
for(int i=0;i<10;i++){tmp+=m[x][i];}
ans=ans||ch(tmp);
tmp.clear();
for(int i=0;i<10;i++){tmp+=m[i][y];}
ans=ans||ch(tmp);
tmp.clear();
for(int i=0;x+i<10&&y+i<10;i++){tmp+=m[x+i][y+i];}
ans=ans||ch(tmp);
tmp.clear();
for(int i=0;x-i>=0&&y-i>=0;i++){tmp+=m[x-i][y-i];}
ans=ans||ch(tmp);
tmp.clear();
for(int i=0;x+i<10&&y-i>=0;i++){tmp+=m[x+i][y-i];}
ans=ans||ch(tmp);
tmp.clear();
for(int i=0;x-i>=0&&y+i<10;i++){tmp+=m[x-i][y+i];}
ans=ans||ch(tmp);
return ans;
}
bool ok(){
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
            if(m[i][j]=='X'){if(is(i,j)){return 1;}}
            }
}
return 0;
}
int main(){
for(int i=0;i<10;i++){
    cin>>s;
    for(int j=0;j<s.length();j++){m[i][j]=s[j];}
}
cout<<(ok()?"YES":"NO")<<endl;
    return 0;
}
/**
XXOXX.....
OO.O......
..........
.........X
........X.
.......X..
......X...
..........
..........
..........
**/
