#include <bits/stdc++.h>
using namespace std;
///vector<long long>mem(2000000003);
map<char,long long>mp;
///pair<,>p[];
///set<>st;
string s;
long long mx;
long long mn =1e9;
int ans=-1;
int main(){
cin>>s;
for(auto c:s){mp[c]++;mx=max(mx,mp[c]);}
        for(int x=2; x<=mx+1; x++) {
            long long sum=0;
            for(auto c:mp){sum += (long long)(c.second%x)*c.second;}
            if(sum < mn) {mn=sum;ans=x;if(sum==0)break;}
        }
        cout<<ans<<endl;
}
/**

1=1;1
2=>3;1 2
4=>6;1 2 3
7=>10;1 2 3 4
seg(1)=1;
seg(2)=3;
seg(3)=6;
seg(4)=10;
seg(x)>n;
x*(x+1)/2>n;
x^2+x-2n>0;
delta=b^2-4ac==>delta=1+8n;
x=(b+delta)/2==>1+delta/2;
ans=n-segm(x-1);
test:
n=5;
delta=6;
x=3;
ans=5-seg(2)=5-3=2;
**/
