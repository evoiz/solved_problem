#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=1e6;
int tmp,ans,n;
map<int ,int > mp;
int main(){
 scanf("%d%d",&n,&tmp);
 for(int i=0;i<n;i++){
    scanf("%d",&tmp);
    ans+=i-mp[tmp];
    mp[tmp]++;
 }
 printf("%d\n",ans);
 return 0;
}
/**
5
1 2 3 4 5

**/
