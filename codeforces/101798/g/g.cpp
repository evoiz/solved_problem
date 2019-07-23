#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
#define INF 1e9

using namespace std;
const int N=1e7,oo=1e9+10;
priority_queue<ll> q;
vector<ll> tmp;
ll n,ans,a[N];
int main(){
  scanf("%lld",&n);
   for(int i=1;i<=n;i++){scanf("%lld",a+i);q.push(a[i]);}
   while(q.size()){
       tmp.clear();
       while(q.size()){tmp.push_back(q.top());q.pop();}
       int i=0,j=tmp.size()-1;
       while(i<j){
          ans+=abs(tmp[i]-tmp[j]);
          q.push(max(tmp[i],tmp[j]));
          i++;
          j--;
       }
   }
   printf("%lld\n",ans);
}
/**
8
100 200 300 400 500 600 700 800

8
100 800 400 500 200 700 300 600
**/
