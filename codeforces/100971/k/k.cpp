#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=(2e6)+5;
string s;
bool ok(string x){
  int l=0,r=x.size()-1;
  while(l<r){
    if(x[l]!=x[r]){return 0;}
    l++;r--;
  }
  return 1;
}
int main(){
  cin>>s;
  int l=0,r=s.size()-1;
  while(l<r){
    if(s[l]!=s[r]){
      string a,b,c;
      for(int i=l+1;i<=r-1;i++){a+=s[i];}
      ///cout<<l<<" "<<r<<" "<<a<<" ";
      b=s[l]+a;
      c=a+s[r];
      ///cout<<b<<endl<<c<<endl;
      if(ok(c)){printf("YES\n%d",l+1);return 0;}
      if(ok(b)){printf("YES\n%d",r+1);return 0;}
      break;
    }
    l++;r--;
  }
  if(ok(s)){printf("YES\n%d",(s.size())/2+(s.size()%2));return 0;}
  printf("NO");
 return 0;
}
/**
12 20
14 7
5 6
aba
aaaa
**/
