#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
#define INF 1e9
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>

using namespace std;
const int N=1e5+5,oo=1e9+10;

int n,mx=-oo,tmp,ans;

int main(){
    scanf("%d",&n);
     for(int i=0;i<n;i++){scanf("%d",&tmp);ans+=(tmp>=mx);mx=max(tmp,mx);}
     printf("%d\n",ans);
    return 0;
}
