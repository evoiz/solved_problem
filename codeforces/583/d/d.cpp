#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
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
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int siz=102;ll inf=1e15;

struct matrix {
    int row,col;
    ll data[siz][siz];
    matrix() {
        row=siz;
        col=siz;
        memset(data,0,sizeof data);
    }
    void print() {
        printf("\n");
        for(int i = 0; i<row; ++i) {
            for(int j = 0; j<col; ++j) {
                printf("%lld ",data[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    matrix operator * (const matrix other) const {
        matrix result = matrix();
        for (int i = 0; i < row; i ++) {
            for (int j = 0; j <other.col; j ++) {
                result.data[i][j]=-inf;
                for (int k = 0; k <col; k ++) {
                    result.data[i][j] =max(result.data[i][j],data[i][k]+other.data[k][j]);
                }
            }
        }
        result.row = row;
        result.col = col;
        return result;
    }
    void init() {
        memset(data,0,sizeof(data));
        for(int i = 0; i<siz; ++i)
            data[i][i]=0ll;
    }
    matrix pow_(ll n) {
        matrix ret;
        ret.init();

        if(n == 0)
            return ret;
        if(n == 1)
            return *this;

        matrix P = *this;

        while(n) {
            if(n&1) {
                ret=ret * P;
            }
            n=n/2ll;
            P=P*P;
        }
        return ret;
    }
};
ll mem[102][102],n,t,a[102];
int main() {
    scll(n);
    scll(t);
    read_arr_ll(a,0,n);
    for (int i=0;i<n;i++){
        for (int j=0;j<n; j++){
           if (a[j]<a[i]){mem[i][j]=-inf;continue;}
                mem[i][j]=1;
                for(int k=0;k<j;k++)
                    if(a[k]<=a[j]){mem[i][j]=max(mem[i][j],mem[i][k]+1ll);}
        }
    }
    matrix tr;
    tr.col=n;
    tr.row=n;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        tr.data[i][j]=mem[i][j];
      }
    }
    tr=tr.pow_(t);
    ll ans=-inf;
     for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        ans=max(ans,tr.data[i][j]);
      }
    }
    printf("%lld\n",ans);


}
/**
n=6 k=3
tmp=2
9+2
**/
