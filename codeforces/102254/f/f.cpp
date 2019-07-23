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
const int N=1e5+10;
int pr[N],ids,n,m;
char in[10];
map<string,int> mp;
inline string scan(){scs(in);return (string) in;}
int get(int x){
    if(x == pr[x])return x;
    return  pr[x] = get(pr[x]);
}
bool join(int x , int y){
    x = get(x);
    y = get(y);

    if(x == y)return false;

    if(rand() & 1)swap(x , y);

    pr[x] = y;
    return true;
}
void set_id(string s){if(mp.find(s)!=mp.end()){return ;};++ids;mp[s]=ids;}
int get_id(string s){return mp[s];}
int main(){
	sc(n);sc(m);
	loop(i,1,n){
		pr[i]=i;
		string tmp=scan();
		set_id(tmp);
	}
	loop(i,1,m){
		int u,v,q;
		sc(q);
		string tmp;
		tmp=scan();
		u=get_id(tmp);
		tmp=scan();
		v=get_id(tmp);
		if(q==1){join(u,v);continue;}
		//cerr<<u<<" "<<v<<endl;
	    printf(get(u)==get(v)?"yes\n":"no\n");	
	}
}
