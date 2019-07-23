#include <bits/stdc++.h>
using namespace std;
int n,m,tmp;
struct studint{
string name;
int mark;
};
bool com(studint a,studint b){
return a.mark<b.mark;
}
vector<studint>best[10004];
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
            studint t;
            cin>>t.name>>tmp>>t.mark;best[tmp].push_back(t);
            }
    for(int i=1;i<=m;i++){
		sort(best[i].begin(),best[i].end(),com);
	}
   for(int i=1;i<=m;i++){
		if(best[i].size()==2){cout<<best[i][1].name<<" "<<best[i][0].name<<endl;continue;}
		int nu=best[i].size();
		if(best[i][nu-2].mark==best[i][nu-3].mark){cout<<"?"<<endl;continue;}
		cout<<best[i][nu-1].name<<" "<<best[i][nu-2].name<<endl;
	}
return 0;
}