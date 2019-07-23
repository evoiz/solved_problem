#include <bits/stdc++.h>
using namespace std;
///vector<pair<long long,bool>>v;
///map<char,long long>mp;
///pair<long long,bool>p;
vector<int>ans;
///set<pair<long long,bool>>st;
///std::set<int>::iterator itup;
const int N=2e3+5;
int last=2;
bool prime[N];
void save(){
for(int i=2;i<N;i+=2){prime[i]=1;}
for(int i=3;i<N;i++){
    if(!prime[i]){
       //// cout<<i<<endl;
        if((last+i)%4==0||(last+i+2)%4==0){ans.push_back(last+i+1);}
        last=i;
        for(int j=i*2;j<N;j+=i){prime[j]=1;}
    }
  }
}
int n,k,res;
int main(){
cin>>n>>k;
save();
for(auto x:ans){
if(x>n){break;}
res+=((x<=n)&&!prime[x]);
}
///cout<<res<<endl;
cout<<(res>=k?"YES":"NO")<<endl;
}
/**

**/
