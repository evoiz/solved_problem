#include<bits/stdc++.h>
using namespace std;
char a,b;
long long c,aa,bb;
bool cw(int x){
string m="^>v<^>v<";
for(int i=0;i<8;i++){if(m[i]==a && m[i+x]==b)return 1;}
return 0;
}
bool ccw(int x){
string m="^<v>^<v>";
for(int i=0;i<8;i++){if(m[i]==a && m[i+x]==b)return 1;}
return 0;
}
int main(){
    cin>>a>>b>>c;
    if((a=='^' && b=='v') || (a=='<' && b=='>') || (b=='^' && a=='v') || (b=='<' && a=='>') || a==b)
    {cout<<"undefined"<<endl;return 0;}
    if(cw(c%4)){cout<<"cw"<<endl;return 0;}
    if(ccw(c%4)){cout<<"ccw"<<endl;return 0;}
    cout<<"undefined"<<endl;return 0;
    return 0;
}
/**
4
1 1
2 2
3 3
4 4
**/
