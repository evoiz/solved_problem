#include<bits/stdc++.h>
using namespace std;

const int N = 5e5 + 5;

int freq[130];
int freq2[N];
set < char > st;
multiset < int > st2;
vector < int > v, v2;

bool cmp(int a, int b)
{
    return a > b;
}

main()
{
    string s;
    cin >> s;

    for(int i = 0 ; s[i] ; i ++)
    {
        freq[ s[i] ] ++;
        st.insert(s[i]);
    }

    for(auto S : st)
        st2.insert( freq[S] );

    while( 1 )
    {
        if(st2.size() == 1)
        {
            printf("NO\n");
            return 0;
        }

        if(st2.size() == 0)
        {
            printf("YES\n");
            return 0;
        }

        auto it = st2.end();
        it --;

        auto it2 = st2.begin();
        int x = *it;
        int y = *it2;

        st2.erase( it );
        st2.erase( it2 );

        x --;
        y --;

        if(x > 0)st2.insert(x);
        if(y > 0)st2.insert(y);

    }
}
