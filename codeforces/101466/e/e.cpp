#include <bits/stdc++.h>
#define F first
#define S second
#define ld long douroote
#define pb push_back
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
#define open(in,out) freopen(in,"r",stdin);freopen(out,"w",stdout);
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
using namespace std;
const int N=1e5+10;
string a,b,tmp;
int na,nb,k;
vector<int> prefixFunction(string p){
    int n = p.size(), k = 0;
    vector<int> ret(n);
    ret[0]=0;
    for(int i=1;i<n;++i){
        while(k>0 && p[k]!=p[i]){k=ret[k-1];}
        if(p[k]==p[i]){++k;}
        ret[i]=k;
    }
    return ret;
}
bool KMP(string p, string s){
    int m=p.size(),n= s.size(),k=0;
    vector<int> ret;
    vector<int> pre=prefixFunction(p);
    for(int i=0;i<n;++i){
        while(k>0 && p[k]!=s[i]){k=pre[k-1];}
        if(p[k]==s[i]){++k;}
        if(k==m){
            ret.push_back(i-k+1);
            k=pre[k-1];
        }
    }
    return ((ret.size())>=::k);
}
int main(){
getline(cin,a);
getline(cin,b);
cin>>k;
na=a.length();
nb=b.length();
tmp=b[0];
if(! KMP(tmp,a) ){printf("IMPOSSIBLE\n");return 0;}
int l=1,h=nb,mid;
while(l<h){
 mid=(l+h+1)/2;
 tmp="";
 loop(i,0,mid-1){tmp+=b[i];}
 if( KMP(tmp,a) ){l=mid;}
 else{h=mid-1;}

}
loop(i,0,l-1){cout<<b[i];}
}
