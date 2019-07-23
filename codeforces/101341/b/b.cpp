/**  elias **/
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
const int siz=1e3+10;
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
vector<int> KMP(string p, string s){
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
    return ret;
}
string s,h="happiness";
int main(){
	cin>>s;
	s="0"+s;
	vector<int> ans=KMP(h,s);
	if(ans.size()==0){
		loop(i,1,3){
			loop(j,i+1,3){
				swap(s[i],s[j]);
				if(KMP(h,s).size()==0){
					printf("YES\n%lld %lld\n",i,j);
					return 0;
				}
				swap(s[i],s[j]);
			}
		}
	}
	if(ans.size()==1){
		printf("YES\n");
		printf("%d %d\n",ans[0]+1,ans[0]+2);
		return 0;
	}
	if(ans.size()==2){
		printf("YES\n");
		printf("%d %d\n",ans[1]+1,ans[0]+2);
		return 0;
	}
	printf("NO\n");
}
