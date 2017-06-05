#include<bits/stdc++.h>
using namespace std;
char m[4][4];
bool ch(int i,int j){
    if(i+1>=0 && i+1<4 && j+1>=0 && j+1<4){
        if(m[i][j]==m[i+1][j]&&m[i][j]==m[i+1][j+1]&&m[i][j]==m[i][j+1]){return 1;}
    }
    if(i-1>=0 && i-1<4 && j+1>=0 && j+1<4){
        if(m[i][j]==m[i-1][j]&&m[i][j]==m[i-1][j+1]&&m[i][j]==m[i][j+1]){return 1;}
    }
    if(i+1>=0 && i+1<4 && j-1>=0 && j-1<4){
        if(m[i][j]==m[i+1][j]&&m[i][j]==m[i+1][j-1]&&m[i][j]==m[i][j-1]){return 1;}
    }
    if(i-1>=0 && i-1<4 && j-1>=0 && j-1<4){
        if(m[i][j]==m[i-1][j]&&m[i][j]==m[i-1][j-1]&&m[i][j]==m[i][j-1]){return 1;}
    }
    return 0;
}
bool get_ac (){
for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
        (m[i][j]=='.'?m[i][j]='#':m[i][j]='.');
        if(ch(i,j)){return 1;}
         (m[i][j]=='.'?m[i][j]='#':m[i][j]='.');
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
        if(ch(i,j)){return 1;}
        }
    }
return 0;
}
int main(){
    for(int i=0;i<4;i++){
        string tmp;
        cin>>tmp;
        for(int j=0;j<4;j++){m[i][j]=tmp[j];}
    }
    (get_ac()?cout<<"YES"<<endl:cout<<"NO"<<endl);
        return 0;

}
