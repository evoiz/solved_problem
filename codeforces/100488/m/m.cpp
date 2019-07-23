#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scc(a) scanf(" %c",&a)
#define scs(a) scanf(" %s",a)
#define me(a,b) memset(a,b,sizeof a)
#define all(a) a.begin(),a.end()
#define allr(a,n) a,a+n
#define loop(s,e,st) for(int i=s;i<=e;i+=st)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
using namespace std;
const int N=1e7+10;
int ans[N],a,b;
int main(){
        sc(a);sc(b);
        printf("%d\n",a*b);
        for(int i=1;i<=a;i++){
            int co=(i-1)*b+1;
            for(int j=i*b;j>(i-1)*b;j--)
                ans[j]=co++;
         }
        for(int i=1;i<=a*b;i++){printf("%d ",ans[i]);}
    return 0;
}
