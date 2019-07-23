#include <bits/stdc++.h>

using namespace std;

int t;
set<char>st;
char ch[11][11];

bool square (int x,int y)
{
    for (int i=x;i<9;i++)
    {
        if (i%3==0&&i!=x)break;
        for (int j=y;j<9;j++)
        {
            if (j%3==0&&j!=y)break;
            st.insert(ch[i][j]);
        }
    }
    if (st.size()==9){st.clear(); return 1;}
    else {st.clear(); return 0;}
}

int main()
{
    cin >> t;
    while(t--)
    {
        bool check=0;
        for(int i=0;i<9;i++)
        {
            for (int j=0;j<9;j++)
            {
                cin >> ch[i][j];
            }
        }
        for (int i=0;i<9;i++)
        {
            for (int j=0;j<9;j++)
            {
                st.insert(ch[i][j]);
            }
            if (st.size()==9)
            {
                st.clear();
                continue;
            }
            else
            {
                check=1;
                break;
            }
        }
        for (int i=0;i<9;i++)
        {
            for (int j=0;j<9;j++)
            {
                st.insert(ch[j][i]);
            }
            if (st.size()==9)
            {
                st.clear();
                continue;
            }
            else
            {
                check=1;
                break;
            }
        }
        for (int i=0;i<9;i+=3)
        {
            for (int j=0;j<7;j+=3)
            {
                if (square(i,j))continue;
                else
                {
                    check=1;break;
                }
            }
            if (check)break;
        }
        if (check)cout << "Invalid" << endl;
        else cout << "Valid" << endl;
        st.clear();
    }
    return 0;
}