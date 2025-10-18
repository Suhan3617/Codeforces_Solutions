#include <bits/stdc++.h>
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long
#define in(a) \
    int a;    \
    cin >> a;
#define st(a) \
    string s; \
    cin >> s;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fr(i, x, y) for (int i = x; i < y; i++)
#define rfr(i, x, y) for (int i = x; i >= y; i--)
#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define lcm(a, b) (a / __gcd(a, b))
#define gcd(a, b) __gcd(a, b)
#define yess cout << "YES\n";
#define no cout << "NO\n"

void solve()
{
    in(n);
    st(s);
    string mex = "";
    for (char c = 'a'; c <= 'z'; c++)
    {
        if (s.find(c) == string::npos)
        {
            mex = c;
            cout<<mex<<endl;
            return;
        }
    }
    for (char c1 = 'a'; c1 <= 'z'; c1++)
    {
        for (char c2 = 'a'; c2 <= 'z'; c2++)
        {
            string temp = "";
            temp.pb(c1);
            temp.pb(c2);
            if (mex == "" && s.find(temp) == string::npos)
            {
                mex=temp;
                cout<<mex<<endl;
                return;
            }
        }
    }
    
    for (char c1 = 'a'; c1 <= 'z'; c1++)
    {
        for (char c2 = 'a'; c2 <= 'z'; c2++)
        {   
            for(char c3='a';c3<='z';c3++){
                
                string temp = "";
                temp.pb(c1);
                temp.pb(c2);
                temp.pb(c3);
                if (mex == "" && s.find(temp) == string::npos)
                {
                    mex=temp;
                    cout<<mex<<endl;
                    return;
                }
            }
        }
    }
    cout<<mex<<endl;
}

int32_t main()
{
    fastio;
    in(t);
    while (t--)
    {
        solve();
    }
}