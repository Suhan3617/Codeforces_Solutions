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
    in(m);
    vector<string> s(n);
    fr(i, 0, n)
    {
        cin >> s[i];
    }
    set<vector<string>> distinct_patterns;
    for (int start_row = 0; start_row <= n - m; start_row++)
    {
        for (int start_col = 0; start_col <= n - m; start_col++)
        {
            vector<string> current_pattern;
            for (int i = start_row; i < start_row + m; ++i)
            {
                string row_substring = s[i].substr(start_col, m);
                current_pattern.push_back(row_substring);
            }
            distinct_patterns.insert(current_pattern);
        }
    }
    cout<<distinct_patterns.size()<<endl;
}

int32_t main()
{
    fastio;
    int t=1;
    while (t--)
    {
        solve();
    }
}