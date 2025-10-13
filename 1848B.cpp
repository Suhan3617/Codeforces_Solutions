#include <bits/stdc++.h>
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long
#define in(a) \
    int a;    \
    cin >> a;
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
    vi colors[k + 1];
    fr(i, 1, k + 1)
    {
        colors[i].pb(0);
    }
    fr(i, 0, n)
    {
        colors[a[i]].pb(i + 1);
    }
    fr(i, 1, k + 1)
    {
        colors[i].pb(n + 1);
    }
    priority_queue<int> jumps[k + 1];

    int ans = INT_MAX;

    fr(i, 1, k + 1)
    {
        int c=colors[i].size();
        for (int j = 0; j < c - 1; j++)
        {
            jumps[i].push(colors[i][j + 1] - colors[i][j] - 1);
        }
        int max_val = jumps[i].top();
        jumps[i].pop();
        if (max_val % 2 == 0)
        {
            jumps[i].push(max_val / 2);
            jumps[i].push((max_val / 2) - 1);
        }
        else
        {
            jumps[i].push(max_val / 2);
            jumps[i].push(max_val / 2);
        }
        ans = min(ans, jumps[i].top());
    }
    cout<<ans<<endl;
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