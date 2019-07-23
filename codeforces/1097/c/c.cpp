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
#define ii pair < int , int >
#define LS pair < ll , string >
using namespace std;
const int N=1e6+10;
ll ss,anss,aa[N],bb[N],n,x;
string s;
int main() {
	sc(n);
	for (int i=0;i<n;i++){
		cin>>s;
		int o=0;
		int c=0;
		for (int j=0;j<s.size();j++){
			if (s[j] == ')'){c+=(o==0);o-=(o!= 0);}
			else {o++;}
		}
		if(c*o!=0){continue;}
		if(o==0&&c==0){x++;}
		else {aa[o]++;bb[c]++;}
	}
	for(int i=1;i<N;i++){anss+=min(aa[i],bb[i]);}
	x=x>>1;anss+=(x);
	cout<<anss<<endl;
}