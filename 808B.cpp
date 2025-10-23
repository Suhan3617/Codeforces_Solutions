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
    vi prefix(n);
    prefix[0] = a[0];
    fr(i, 1, n)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }
    int sum = 0;
    for (int i = 0; i <= n - k ; i++)
    {
        int window_sum;
        if (i == 0)
            window_sum = prefix[k - 1];
        else
            window_sum = prefix[i + k - 1] - prefix[i - 1];

        sum += window_sum;
    }
    cout << fixed << setprecision(6) << 1.0 * sum / (n - k + 1) << endl;
}

int32_t main()
{
    fastio;
    int t = 1;
    while (t--)
    {
        solve();
    }
}