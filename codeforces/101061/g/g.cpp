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
ll mod=1e9+7,n,m,t;
struct matrix{
    int row=siz;
    int col=siz;
    ll data[siz][siz];
    matrix() {
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
                    result.data[i][j] = (result.data[i][j]%mod+1ll*(data[i][k]%mod)*(other.data[k][j]%mod)%mod)%mod;
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
ll lg(ll x){
ll ret=1;
while(x){ret*=10;x/=10ll;}
return ret;
}
int main(){
matrix  num,tr,ftr;
scll(t);
while(t--){
scll(n);scll(m);
num.data[0][0]=0; num.data[0][1]=m;


tr.data[0][0]=lg(m); tr.data[0][1]=0;
tr.data[1][0]=1ll;   tr.data[1][1]=1;
ftr=tr.pow_(n);
ftr=num*ftr;
printf("%lld\n",ftr.data[0][0]%mod);
}
}
/**
100
2 1 2
**/
