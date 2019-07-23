#include<bits/stdc++.h>
#define ll long long
#define S second
#define F first
using namespace std;
const int N=24;
char s[N],op;
string str,tmp;
int t;
long long a,b,c;
bool na,nb,nc;
bool is(char c){
return c=='+'||c=='-'||c=='*'||c=='=';
}
bool ch(int x){
tmp=str;
for(int i=0;i<tmp.length();i++){if(tmp[i]=='?'){tmp[i]='0'+x;}}
a=0ll,b=0ll,c=0ll;
na=0;nb=0,nc=0;
int it=0;
/**a**/
if(is(tmp[0])){it++; if(tmp[0]=='-'){na=1;}}
while(!is(tmp[it])){a*=10ll;a+=1ll*(tmp[it]-'0');it++;}
a=(na?-a:a);
/**b**/
op=tmp[it++];
if(is(tmp[it])){if(tmp[it]=='-'){nb=1;}it++;}
while(!is(tmp[it])){b*=10ll;b+=1ll*(tmp[it]-'0');it++;}
b=(nb?-b:b);
/**c**/
it++;
int len=tmp.length()-it;
if(is(tmp[it])){if(tmp[it]=='-'){nc=1;}it++;}
while(it<tmp.length()){c*=10ll;c+=1ll*(tmp[it]-'0');it++;}
c=(nc?-c:c);
///////////////////////////////////////////////
if((!c && len>1)||(c==b && a==1)){return 0;}
if(op=='-'){return a-b==c;}
if(op=='+'){return a+b==c;}
return a*b*1ll==c*1ll;
}
int main() {
scanf("%d",&t);
while(t--){
scanf("%s",s);
str=(string)s;
bool ok=0;
for(int i=0;i<=9;i++){
if(ch(i)){printf("%d\n",i);ok=1;break;}
}
if(!ok){printf("-1\n");}
}

}
/**
3
2
1.0 1.0
1.5 0.0
3
1.0 1.0
1.0 1.0
1.0 1.0
6
1.5 0.0
2.0 2.0
2.5 6.0
3.0 5.0
4.0 2.0
10.0 5.5
**/
