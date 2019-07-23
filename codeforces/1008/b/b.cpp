#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=1e5+10;
pair<int,int>v[N];
int n,w,h;
int main(){
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        scanf("%d%d",&w,&h);
        v[i].first = max(w, h);
        v[i].second = min(w,h);
    }

    int flag = 0;

    for(int i = n-1; i>=0; i--){

          if(v[i+1].second > v[i].first && v[i+1].second > v[i].second){
            flag = 1;
            break;
        }
        else if(v[i+1].second > v[i].second){
            int temp = v[i].first;
            v[i].first = v[i].second;
            v[i].second = temp;
        }
    }

    for(int i = n-1; i>=0; i--)
        if(v[i].second < v[i+1].second)
        {
            flag = 1;
            break;
        }

    if(flag){
        printf("NO\n");
        return 0;
    }
        printf("YES\n");

    return 0;
}
