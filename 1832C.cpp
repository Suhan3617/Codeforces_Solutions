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
#define lcm(a, b) ((a) / __gcd((a), (b)) * (b))
#define gcd(a, b) __gcd(a, b)
#define yess cout << "YES\n";
#define no cout << "NO\n"

void solve()
{
    in(n);
    vi a(n);
    fr(i, 0, n)
    {
        cin >> a[i];
    }
    if (a.size() == 1)
    {
        cout << "1\n";
        return;
    }
    vi ans;
    ans.pb(a[0]);
    ans.pb(a[1]);
    for (int i = 2; i < n; i++)
    {
        int cur_size = ans.size();
        int x = ans[cur_size - 2] - ans[cur_size - 1];
        int y = ans[cur_size - 1] - a[i];

        if (x > 0)
        {
            if (y > 0)
            {
                ans[cur_size - 1] = a[i];
            }
            else if (y < 0)
            {
                ans.pb(a[i]);
            }
        }
        else
        {
            if (y < 0)
            {
                ans[cur_size - 1] = a[i];
            }
            else if (y > 0)
            {
                ans.pb(a[i]);
            }
        }
    }
    int ansval = ans.size();
    if (ans[0] == ans[1])
       { ansval--;}

    cout << ansval << endl;
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