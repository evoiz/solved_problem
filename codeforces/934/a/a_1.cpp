#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;

ll n,m,a[55],b[55];

set<ll>st;

int main(){
   scanf("%d%d",&n,&m);
    for (int i=0;i<n;i++)cin>>a[i];
    for (int i=0;i<m;i++)cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    for (int i=0;i<n;i++){
        ll tmp=-1e18;
        for (int j=0;j<n;j++){
            if (i==j)continue;
            for (int k=0;k<m;k++){
                if (!b[k])continue;
                tmp=max(tmp,a[j]*b[k]);
            }
        }
        st.insert(tmp);
    }
    cout << *(st.begin()) << endl;
    return 0;
}
/**

3 3
-1 0 0
1 1 1
**/
