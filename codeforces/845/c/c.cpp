#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
using namespace std;
int n,show1,show2;

bool tv1,tv2;
pair<int,int>p[200009];

bool cmp(pair<int,int>a,pair<int,int>b){
        return a.F<b.F;
}

int main(){
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> p[i].F >> p[i].S;
    }
    sort(p,p+n,cmp);
    for (int i=0;i<n;i++){
        if ((p[i].F==show1||p[i].F==show2)&&tv1&&tv2&&min(show1,show2)>=p[i].F){cout << "NO" << endl;return 0;}
        if (p[i].F>show1){show1=0;tv1=0;}
        else if (p[i].F>show2){tv2=0;show2=0;}
        if (tv1&&tv2){cout << "NO" << endl;return 0;}
        else{
            if (!tv1){tv1=1;show1=p[i].S;}
        else if (!tv2){tv2=1;show2=p[i].S;}
        }
    }
    cout << "YES" << endl;
    return 0;
}
