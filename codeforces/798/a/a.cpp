#include <bits/stdc++.h>
using namespace std;
int ans,l,h;
string s;
int main(){
cin>>s;
h=(s.length()/2)+(s.length()%2),l=h-1-(s.length()%2);
while(l>=0){
ans+=(s[l]!=s[h]);
l--;
h++;
}
cout<<(ans==1 || (!ans && s.length()%2==1)?"YES":"NO")<<endl;
return 0;
}
/**
5
l=1 h=3


**/
