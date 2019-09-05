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
int a,b;
int main(){
scanf("%d:%d",&a,&b);
int t=a*60+b;
for(int i=t+1;i<1439;i++){
	a=i/60;
	b=i%60;
	string aa=to_string(a);
	string bb=to_string(b);
	if(aa.size()==1){aa="0"+aa;}
	if(bb.size()==1){bb="0"+bb;}
	string c=bb;
	reverse(all(c));
	if(aa==c){printf("%s:%s",aa.c_str(),bb.c_str());return 0;}
}
printf("00:00");
}
