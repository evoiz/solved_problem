#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=1100;
map<string,int>mp;
int q;
char c[N];
string s;
void read(){scanf("%s",c);s=(string) c;}
int main(){
scanf("%d",&q);
while(q--){
read();
if(mp[s]!=0){printf("%s%d\n",s.c_str(),mp[s]);}
else{printf("OK\n");}
mp[s]++;
}
return 0;
}