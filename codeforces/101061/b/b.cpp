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
const long long MOD =1e9+7;
struct Matrix{
    ll X[3][3];

    Matrix(){}

    void init(){
        memset(X,0,sizeof(X));
        for(int i = 0;i <3;++i) X[i][i] = 1ll;
    }
    void print(){
     for(int i = 0;i < 3;++i){
        for(int j = 0;j < 3;++j){cout<<X[i][j]<<" ";}
        cout<<endl;
        }
    }
}aux;

void mult(Matrix &m, Matrix &m1, Matrix &m2){
    memset(m.X,0,sizeof(m.X));

    for(int i = 0;i < 3;++i)
        for(int j = 0;j < 3;++j)
            for(int k = 0;k <3;++k)
                m.X[i][k] = (m.X[i][k]%MOD + (m1.X[i][j]%MOD * m2.X[j][k]%MOD) ) % MOD;
}

Matrix pow_(Matrix &M0, int n){
	Matrix ret;
	ret.init();

	if(n == 0) return ret;
	if(n == 1) return M0;

	Matrix P = M0;

	while(n){
	    if(n & 1){
	        aux = ret;
	        mult(ret,aux,P);
	    }

	    n >>= 1;
	    aux = P;
	    mult(P,aux,aux);
	}

    return ret;
}
const int N=1e6+10;
ll n,t,a[N],sum;
int main(){
Matrix rgb;
rgb.X[0][0]=1; rgb.X[0][1]=1; rgb.X[0][2]=1;
rgb.X[1][0]=0; rgb.X[1][1]=0; rgb.X[1][2]=0;
rgb.X[2][0]=0; rgb.X[2][1]=0; rgb.X[2][2]=0;

Matrix tr;
tr.X[0][0]=1; tr.X[0][1]=4; tr.X[0][2]=7;
tr.X[1][0]=2; tr.X[1][1]=5; tr.X[1][2]=8;
tr.X[2][0]=3; tr.X[2][1]=6; tr.X[2][2]=9;
Matrix ftr,ans;
scll(t);
while(t--){
scll(n);
ftr=pow_(tr,n-1);
///ftr.print();
mult(ans,rgb,ftr);
ll res=0ll;
for(int i=0;i<=2;i++){res+=ans.X[0][i];res%=MOD;}
printf("%lld\n",res);
}

}
/**
3 0
1
0
4

**/
