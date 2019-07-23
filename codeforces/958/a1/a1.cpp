#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=2e5+6,mod=1e9+7,oo=1e9+10;
int n;
char m[14][14],mm[14][14],a[14][14];
vector <int> ms,tmp;
void rotit(){
for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
        mm[i][j] = m[n-1-j][i];
        cerr<<mm[i][j]<<" ";
    }
cerr<<endl;
  }
  cerr<<endl;
}
void chang(){
for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
        m[i][j] = mm[i][j];
    }
  }
}
bool ok(){
for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){if(mm[i][j]!=a[i][j]){return 0;}}
}
return 1;
}
bool ok2(){
for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){if(mm[i][n-j-1]!=a[i][j]){return 0;}}
}
return 1;
}
bool ch(){
for(int i=0;i<4;i++){
 rotit();
 if(ok()||ok2()){cerr<<i<<endl;return 1;}
 chang();
}
return 0;
}
int main(){
scanf("%d",&n);
for(int i=0;i<n;i++){
  scanf("%s",a[i]);
}
for(int i=0;i<n;i++){
  scanf("%s",m[i]);
}
printf(ch()?"YES\n":"NO\n");
return 0;
}
/**
4
XOOO
XXOO
OOOO
XXXX

XOOO
XOOO
XOXO
XOXX

2
XX
OO
XO
OX

**/
