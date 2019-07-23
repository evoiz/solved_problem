#include<bits/stdc++.h>
using namespace std;
const int N=109;
char mm[N][N];
int n,m;
bool am(){
vector<int>p[3];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){if(mm[j][i]!=mm[0][i]){return 0;}}
    if(mm[0][i]=='R')p[0].push_back(i);
   else if(mm[0][i]=='G')p[1].push_back(i);
   else if(mm[0][i]=='B')p[2].push_back(i);
 }
 ////cout<<mp['R']<<" "<<mp['G']<<" "<<mp['B']<<endl;
 if(p[0].size()!=p[1].size()|| p[0].size()!=p[2].size()){return 0;}
 for(int i=0;i<3;i++){
    for(int j=1;j<p[i].size();j++){if(p[i][j]-1!=p[i][j-1]){return 0;}}
 }
 return 1;
}
bool st(){
   vector<int>p[3];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){if(mm[i][j]!=mm[i][0]){return 0;}}
    if(mm[i][0]=='R')p[0].push_back(i);
   else if(mm[i][0]=='G')p[1].push_back(i);
   else if(mm[i][0]=='B')p[2].push_back(i);
 }
 if(p[0].size()!=p[1].size()|| p[0].size()!=p[2].size()){return 0;}
 for(int i=0;i<3;i++){
    for(int j=1;j<p[i].size();j++){if(p[i][j]-1!=p[i][j-1]){return 0;}}
 }
 return 1;
}
int main(){
cin>>n>>m;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>mm[i][j];
    }
 }
 bool ok=st()||am();
 cout<<(ok?"YES":"NO")<<endl;
}
/**
4 6
BRGBRG
BRGBRG
BRGBRG
BRGBRG
**/
