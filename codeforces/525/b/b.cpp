#include <bits/stdc++.h>
using namespace std;
const int N=2e5+6;
string s;
int m[N],n,tmp;
int main(){
cin>>s;
cin>>n;
while(n--){cin>>tmp;m[tmp]++;m[s.length()-tmp+1]--;}
for(int i=1;i<=s.length()-1;i++){m[i]+=m[i-1];}
for(int i=0;i<s.length()/2;i++){if(m[i+1]%2){swap(s[s.length()-i-1],s[i]);}}
cout<<s<<endl;
}
/**
4 5
5 0
**/

