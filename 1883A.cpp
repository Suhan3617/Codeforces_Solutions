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
    string s;
    cin >> s;
 
    int cur = 1, ans = 0;
 
    fr(i,0,4)
    {
        int now = s[i] - '0';
        if (now == 0)
            now = 10;
 
        while (cur < now)
            cur++, ans++;
        while (cur > now)
            cur--, ans++;
    }
 
    cout << ans + 4 << "\n";
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