#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;

double ans;

int n,a[109],sum,cnt;
int main(){
    cin >> n;
    for (int i=0;i<n;i++){cin >> a[i];sum+=a[i];}
    ans=sum;ans/=n;
    if (round(ans)==5){cout << 0 << endl;return 0;}
        sort(a,a+n);
        for (int i=0;i<n;i++){
            sum+=5-a[i];
            cnt++;
            double x=sum;x/=n;
            if (round(x)==5)
            {
                cout << cnt << endl;
                return 0;
            }
        }
    return 0;
}
/**
4.5*4=18
**/
