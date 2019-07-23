#include <bits/stdc++.h>
using namespace std;
int ans=1e6;
string s,tmp,t;
void com(string a,string b){
int x=0,y=0;
for(int i=0;i<3;i++){x+=a[i]-'0';}
for(int i=3;i<6;i++){y+=a[i]-'0';}
if(x!=y){return ;}
int tans=(a[0]!=b[0])+(a[1]!=b[1])+(a[2]!=b[2])+(a[3]!=b[3])+(a[4]!=b[4])+(a[5]!=b[5]);
ans=min(ans,tans);
}
void btc(){
    if(tmp.length()==6){
            ///cout<<tmp<<endl;
            com(tmp,s);
    return ;}
    for(char c='0';c<='9';c++){
        tmp+=c;
        btc();
        t=tmp.substr(0,tmp.length()-1);
        tmp=t;
    }
  return ;
}
int main(){
cin>>s;
btc();
cout<<ans<<endl;
}
/**
for(int a=0;a<=9;a++){
    for(int b=0;a<=9;b++){
       for(int c=0;c<=9;c++){
         for(int d=0;d<=9;d++){
            for(int e=0;e<=9;e++){
              for(int b=0;a<=9;a++){

             }
         }
       }
     }
   }
 }

**/
