#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define F first
#define S second
#define ld long douroote
#define pb push_back
#define sz size
#define ll long long
#define ull unsigned long long
#define INF 0x7f7f7f7f
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scc(a) scanf(" %c",&a)
#define scs(a) scanf(" %s",a)
#define me(a,b) memset(a,b,sizeof a)
#define all(a) a.begin(),a.end()
#define allr(a,n) a,a+n
#define loop(a,s,e) for(ll a=s;a<=e;a++)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
using namespace __gnu_pbds;
using namespace std;
const int sz=100;
ll mod=1e9+7,n,m,t;
struct matrix{
    int row,col;
    ll data[sz][sz];
    matrix() {
      row=sz;col=sz;
      memset(data,0,sizeof data);
    }
    void print(){
       printf("\n");
       for(int i = 0;i<row;++i){
        for(int j = 0;j<col;++j){printf("%lld ",data[i][j]);}
        printf("\n");
        }
        printf("\n");
    }
    matrix operator * (const matrix other) const{
        matrix ret = matrix();
        for (int i = 0; i < row; i ++) {
            for (int j = 0; j <other.col; j ++) {
                for (int k = 0; k <col; k ++) {
                    ret.data[i][j]=(1LL * data[i][k]*other.data[k][j]+ret.data[i][j])%mod;
                }
            }
        }
        ret.row = row;
        ret.col = col;
        return ret;
    }
    void init(){
        memset(data,0,sizeof(data));
        for(int i = 0;i<sz;++i)data[i][i]=1ll;
    }
    matrix pow_(ll n){
	matrix ret;
	ret.init();

	if(n == 0) return ret;
	if(n == 1) return *this;

	matrix P = *this;

	while(n){
	    if(n&1){ret=ret * P;}
        n=n/2ll;
	    P=P*P;
	}
    return ret;
   }
};



int main() {
  scll(n);scll(m);
  matrix a,b;
  for(int i=0;i<m;i++){a.data[0][i]=1;}
  for(int i=0;i<m-1;i++){b.data[i+1][i]=1;}
   b.data[m-1][m-1]=1;
   b.data[0][m-1]+=1;

   b=b.pow_(n);
   a=a*b;
  printf("%lld\n",a.data[0][0]);

  return 0;
}

/**
dp(i)=dp(i-1)+dp(i-m);

a=|11111|
b=|000|
  |101|
  |011|
**/
