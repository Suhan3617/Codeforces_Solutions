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
    in(k);
    vi a(n);
    fr(i, 0, n)
    {
        cin >> a[i];
    }
    if (k >= 3)
    {
        cout << "0" << endl;
        return;
    }
    vi diff;
    fr(i, 0, n)
    {
        fr(j, i + 1, n)
        {
            diff.pb(abs(a[i] - a[j]));
        }
    }
    sort(all(diff));
    int minn = diff[0];
    sort(all(a));
    int ans = a[0];
    ans = min(minn, ans);
    if (k == 2)
    {
        fr(i, 0, n)
        {
            auto it = lower_bound(all(diff), a[i]);
            if (it != diff.end())
            {
                ans = min(ans, abs(*it - a[i]));
            }
            if (it != diff.begin())
            {
                --it;
                ans = min(ans, abs(*it - a[i]));
            }
        }
    }
    cout << ans << endl;
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