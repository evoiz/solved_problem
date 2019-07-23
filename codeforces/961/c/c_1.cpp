#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
#define OO 1e15
///string read(){scanf("%s",ch);return (string ) ch;}

using namespace std;
const int N=1e6+10,oo=1e9;
int n,a[7],b[7],mem[5][5][5];
char ch[103][103];
void cal(int i){
for(int i=0;i<n;i++){scanf("%s",ch[i]);}
int ansa=0,ansb=0,s=1,t=0;

for(int i=0;i<n;i++){
   for(int j=0;j<n;j++){
        ansa+=((ch[i][j]-'0')!=s);
        ansb+=((ch[i][j]-'0')!=t);
        t=!t;
        s=!s;
   }
}
a[i]=ansa;b[i]=ansb;
}
void read(){
for(int i=0;i<4;i++){cal(i);}
}
bool lg(int mask){
int ans=0;
while(mask>0){mask-=mask&(-mask);ans++;}
return ans==2;
}
int main(){
memset(mem,-1,sizeof mem);
    scanf("%d",&n);
    read();
    for(int i=0;i<4;i++){cerr<<a[i]<<" ";}
    cerr<<endl;
    for(int i=0;i<4;i++){cerr<<b[i]<<" ";}
    cerr<<endl;
    int mask=(1<<4)-1;
    int ans=oo,res=oo;
    for(int i=3;i<=mask;i++){
       if(lg(i)){
          ans=0;
          for(int j=0;j<4;j++){if(i&(1<<j)){ans+=a[j];continue;}ans+=b[j];}
          cerr<<ans<<endl;
          res=min(res,ans);
       }
    }
    cout<<res<<endl;
    return 0;
}
/**
2- a < b < c

3- c - b = 1

4- a = N

a +  b > c
a +  c-1 > c
a -1 > 0
a > 1
a^2  + b^2 = c^2
a^2  + (c-1)^2= c^2
a^2  - 2c + 1 =0
a^2 = 2c -1
a = sqrt(2c-1)
**/
