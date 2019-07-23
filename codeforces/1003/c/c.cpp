#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=5e4+10;
int n,k;
double sum[N],tmp,ans;
int main(){
    cin>>n>>k;
    for (int i=1;i<=n;i++){cin >> sum[i];}
    for (int i=1;i<=n;i++){sum[i]+=sum[i-1];}
    for (int i=1;i<=n;i++){
        for(int j=i+k-1;j<=n;j++){tmp=1.0*(sum[j]-sum[i-1])/(j-i+1);ans=max(ans,tmp);}
    }
    cout<<setprecision(6)<<fixed<<ans<<endl;
    return 0;
}
/**

5 6 4
******
*..*.*
******
*....*
******
2 2
2 3
2 5
4 3

**/
