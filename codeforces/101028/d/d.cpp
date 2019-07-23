#include <bits/stdc++.h>
using namespace std;
int t,n,r,c,x1,x2,y1,y2;
char m[103][103],ch;
void add(){
for(int i=x1;i<=x2;i++){
  for(int j=y1;j<=y2;j++){m[i][j]=ch;}
}
}
void pr(){
for(int i=1;i<=r;i++){
    for(int j=1;j<=c;j++){if(m[i][j]==0){cout<<'.';continue;}cout<<m[i][j];}
    cout<<endl;
}
}
void start(){
for(int i=1;i<=101;i++){
   for(int j=1;j<=101;j++){m[i][j]=0;}
}
}
int main(){
scanf("%d",&t);
while(t--){
start();
cin>>r>>c>>n;
while (n--){
    cin>>x1>>y1>>x2>>y2>>ch;
    add();
}
pr();
}
    return 0;
}
