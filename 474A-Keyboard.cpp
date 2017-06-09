#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
char c;
string m="qwertyuiop[]asdfghjkl;'zxcvbnm,./";
char ch(char in){
    for(int i=0;i<m.size();i++){
        if(m[i]==in && c=='R'){return m[i-1];}
        if(m[i]==in && c=='L'){return m[i+1];}
    }
}
int main(){
   string s;
   cin>>c>>s;
   for(auto x:s){cout<<ch(x);}
   cout<<endl;
}
