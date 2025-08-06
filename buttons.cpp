#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
typedef long double ld;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && c % 2 == 0)
    {
        cout << "Second" << endl;
    }
    else if (a == b && c % 2 == 1)
    {
        cout << "First" << endl;
    }
    else if (a > b)
    {
        cout << "First" << endl;
    }
    else if (a<b)
    {
        cout << "Second" << endl;
    }
}
int32_t main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}