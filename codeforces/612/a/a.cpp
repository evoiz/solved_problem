#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=1e6;
int n,a,b,x,y;
char in[200];
string s;
string read(){
scanf("%s",in);
return (string)in;
}
void solve(int x,int y){
  printf("%d\n",x+y);
  int i=0;
  for(int j=0;j<x;j++){
     for(int k=0;k<a;k++,i++){printf("%c",in[i]);}
     printf("\n");
  }
  for(int j=0;j<y;j++){
   for(int k=0;k<b;k++,i++){printf("%c",in[i]);}
     printf("\n");
  }
}
int main(){
 scanf("%d%d%d",&n,&a,&b);
 s=read();
 for(int i=0;i<=n;i+=a){
    if((n-i)%b==0){
     solve(i/a,(n-i)/b);
     return 0;
    }
 }
 printf("-1\n");
 return 0;
}
/**
5
1 2 3 4 5

**/
