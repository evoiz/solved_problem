#include <bits/stdc++.h>
using namespace std;

string s;
bool ans;
const int N=1e5+8;
int a[N],b[N];
bool ch(){
for(int i=0;i<s.length()-1;i++){
    if(s[i]=='A'&&s[i+1]=='B'){a[i]=1;}
    if(s[i]=='B'&&s[i+1]=='A'){b[i]=1;}
  }
  for(int i=1;i<s.length();i++){a[i]+=a[i-1];b[i]+=b[i-1];}
 /** for(int i=0;i<s.length();i++){cout<<a[i]<<" ";}
  cout<<endl;
  for(int i=0;i<s.length();i++){cout<<b[i]<<" ";}
  cout<<endl;**/
  for(int i=0;i<s.length()-1;i++){
  ///  cout<<i<<"\t"<<i+1<<"  "<<s.length()-1<<endl;
    if(a[i]!=0 && (b[s.length()-1]-b[i+1]>0)){return 1;}
    if(b[i]!=0 && (a[s.length()-1]-a[i+1]>0)){return 1;}
  }
 return 0;
}
int main() {
cin>>s;
ans=ch();
cout<<(ans?"YES":"NO")<<endl;
}
