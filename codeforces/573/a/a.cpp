#include <bits/stdc++.h>
using namespace std;
///vector<pair<int,int>>v;
///map<char,long long>mp;
///pair<,>p[];
set<long long >st;
///std::set<int>::iterator itup;
const int N=1e5+5;
long long n,ans,tmp;
int main(){
cin>>n;
for(int i=0;i<n;i++){
    cin>>tmp;
      while(!(tmp%2)){tmp/=2;}
      while(!(tmp%3)){tmp/=3;}
    st.insert(tmp);
  }
  cout<<(st.size()<=1?"Yes":"No")<<endl;
}
