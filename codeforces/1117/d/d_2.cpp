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
struct matrix {
  ll data[sz][sz];
  ll row,col;
  matrix(ll val=0) {
    col=sz;
    row=sz;
    for (int i=0;i<row;i++){
      for (int j=0;j<col;j++){data[i][j]=0ll;}
      data[i][i] = val;
    }
  }

  matrix operator * (const matrix &other) {
    matrix ret;
    for (int i=0; i<row; i++) {
      for (int j=0; j<other.col;j++) {
        for (int k=0; k<col;k++) {
          ret.data[i][j]=(1LL * data[i][k]*other.data[k][j]+ret.data[i][j])%mod;
          ret.data[i][j]%=mod;
        }
      }
    }

    return ret;
  }
  matrix pow_(ll y) {
     matrix ret(1);
     matrix A=*this;
     for (; y; y >>= 1) {
      if (y & 1) ret = ret * A;
      A = A * A;
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
  printf("%d\n",a.data[0][0]);

  return 0;
}

/**
dp(i)=dp(i-1)+dp(i-m);

a=|11111|
b=|000|
  |101|
  |011|
**/
