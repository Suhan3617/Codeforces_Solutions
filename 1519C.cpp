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
    vi u(n), s(n);
    fr(i, 0, n) cin >> u[i];
    fr(i, 0, n) cin >> s[i];
    vector<vi> skills(n);
    fr(i, 0, n)
    {
        skills[u[i] - 1].pb(s[i]);
    }
    for (auto &v : skills)
    {
        sort(all(v));
    }
    vector<vi> pre(n, vi(1, 0));
    fr(i, 0, n)
    {
        for (int j = 0; j < (int)skills[i].size(); j++)
        {
            pre[i].pb(pre[i].back() + skills[i][j]);
        }
    }
    vi ans(n + 1);
    for (int i = 0; i < n; i++)
    {
        int nums = (int)skills[i].size();
        for (int k = 1; k <= nums; k++)
        {
            ans[k] += pre[i].back() - pre[i][nums % k];
        }
    }
    fr(i,1,n+1){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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