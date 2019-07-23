#include <bits/stdc++.h>
#define F first
#define S second
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
#define loop(a,s,e) for(ll a=s;a<=e;a++)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define F first
#define S second
#define ld long double
#define ll long long
#define pb push_back
#define sz size
using namespace std;
void go(){
#ifdef Evoiz
 freopen("in.txt","r",stdin);
 #endif
}
int pow_(int a,int b,int mod=1e9+7){
    ll ans=1;
    while(b){
        if(b&1)ans=ans*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return ans;
}
const int N=2e6+2;
int lena,lenb,lenc,indx,co=9;
char a[N],b[N],c[N];
bool fr[12];
int main(){
	go();
	sc(lena);sc(lenb);sc(lenc);
    scs(a);scs(b);scs(c);
    for(int i=lenc-1;i>=0;i--){
		if(c[i]=='*'){c[i]='0';break;}
		indx++;
	}
    loop(i,1,9){fr[i]=1;}
    loop(mod,9,9){
		int moda=0,modb=0,modc=0;
		loop(i,0,lena-1){moda*=10;moda+=(a[i]-'0');moda%=mod;}
		loop(i,0,lenb-1){modb*=10;modb+=(b[i]-'0');modb%=mod;}
		loop(i,0,lenc-1){modc*=10;modc+=(c[i]-'0');modc%=mod;}
		moda=(moda*modb)%mod;
		///cerr<<mod<<" "<<moda<<" "<<modb<<" "<<modc<<endl;
		loop(i,1,9){
			if(fr[i]==1){
				int  modcc=(modc+i*pow_(10,indx,mod))%mod;
				if(modcc!=moda){fr[i]=0;co--;}
			}
		}
		if(co==1){
			loop(i,1,9){
			   if(fr[i]==1){
				   printf("%lld\n",i);
				  return 0;
			   }	
			}
		}
	}
	///cerr<<"-1"<<endl;
}
