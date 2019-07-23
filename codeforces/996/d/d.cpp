#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=1e5+9;
using namespace std;

ll n,a[N],ans;

int main(){
    cin >> n;
    for (int i=0;i<n*2;i++){cin >> a[i];}
    for (int i=0;i<n*2;i++){
        i++;
        if (a[i]==a[i-1]){continue;}
        for (int j=i; j<2*n; j++){
            if (a[j]==a[i-1]){
                ans+=j-i;
                for (int k=j;k>=i;k--){swap(a[k],a[k-1]);}
                break;
            }
        }
    }
   printf("%lld\n",ans);
return 0;
}