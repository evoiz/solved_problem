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
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ll long long
using namespace std;
const int siz=2;
ll mod=1000000007;
struct matrix{
    int row,col;
    ll data[siz][siz];
    matrix() {
      row=siz;col=siz;
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
        matrix result = matrix();
        for (int i = 0; i < row; i ++) {
            for (int j = 0; j <other.col; j ++) {
                for (int k = 0; k <col; k ++) {
                    result.data[i][j] = (result.data[i][j]+1ll*(data[i][k]*other.data[k][j]%mod))%mod;
                }
            }
        }
        result.row = row;
        result.col = col;
        return result;
    }
    void init(){
        memset(data,0,sizeof(data));
        for(int i = 0;i<siz;++i)data[i][i]=1ll;
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
matrix tr,num;
ll n;
int main(){
num.row=1;
num.data[0][0]++;
tr.data[0][0]=3;tr.data[0][1]=1;
tr.data[1][0]=1;tr.data[1][1]=3;
scll(n);
tr=tr.pow_(n);
tr=num * tr;
printf("%lld\n",tr.data[0][0]);
}
/**
| 1 0 | X |3 1 |
          |1 3 |
**/
