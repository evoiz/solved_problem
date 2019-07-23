#include<bits/stdc++.h>

using namespace std;
using ll  = long long;
using ii  = pair < int , int >;
using pll = pair < ll , ll >;
using i3  = pair < int , ii >;
using vi  = vector < int >;
using vii = vector < ii >;
using vi3 = vector < i3 >;

const int N = 2222;
const ll INF = 1e12;
const double eps = 1e-9 , PI = acos(-1);

int n , m;

string s;
vector < char > v;

bool solve(){
    v.clear();
    s.clear();

    //cout << "here\n";
    getline(cin , s);
    scanf("%d" , &n);

    //cout << "s = " << s << endl;

    bool caps = 0;
    while( n -- ){
        string q;
        cin >> q;

        if(q.length() == 1){
            if(caps){
                  if(q[0] >= 'a')q[0] -= 32;
            }
            v.push_back(q[0]);
        }
        else {
            if(q == "Space")v.push_back(' ');
            else if(q == "Backspace"){
                if(v.size() != 0)
                    v.pop_back();
            }
            else caps ^= 1;
        }
    }

    if(v.size() != s.length()){
        return false;
    }

    for(int i = 0 ; i < v.size() ; i ++){
        if(v[i] != s[i])return false;
    }
    return true;
}
int main(){
    int t = 1;
    //scanf("%*d" , &t);
    scanf("%*d");
    getline(cin , s);

    while( t -- ){
            if(solve()){
                printf("Correct\n");
            }
            else {
                printf("Incorrect\n");
            }
    }

    return 0;
}

