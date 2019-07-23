#include <bits/stdc++.h>
using namespace std;
string s;
char m[200];
long long ans,local;
int solve(string x){
string tmp;
bool ch=1;
for(int i=0,c=0;i<x.length();i++,c++){
    if(s[i]==':'&&ch){ch=0;continue;}
    if(ch){continue;}
    tmp+=s[i];
 }
 return tmp.length();
}
int main() {
	while(getline(cin,s)){
        if(s[0]=='+'){local++;continue;}
        if(s[0]=='-'){local--;continue;}
        ans+=local*solve(s);
	}
	printf("%I64d\n",ans);
}
