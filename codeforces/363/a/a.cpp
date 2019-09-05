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
string con[]={
	"O-|-OOOO",
	"O-|O-OOO",
	"O-|OO-OO",
	"O-|OOO-O",
	"O-|OOOO-",
	"-O|-OOOO",
	"-O|O-OOO",
	"-O|OO-OO",
	"-O|OOO-O",
	"-O|OOOO-",
	};
int main(){
int n;
sc(n);
if(n==0){printf("%s\n",con[0].c_str());return 0;}
while(n){
	printf("%s\n",con[n%10].c_str());
    n/=10;
}
	
}
