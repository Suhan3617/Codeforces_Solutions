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
    int count = 0;
    vector<vector<int>> a(n, vector<int>(n));

    fr(i, 0, n)
    {
        fr(j, 0, n)
        {
            cin >> a[i][j];
        }
    }
    fr(i, 0, n)
    {
        fr(j, 0, n)
        {
            if (a[i][j] != a[n - i - 1][n - j - 1])
            {
                count++;
            }
        }
    }
    int ans = count / 2;  
    int rem = abs(k - ans);
    if (ans > k)
    {
        no;
        return;
    }

    if (ans == k)
    {
        yess;
        return;
    }

    if (ans < k && rem % 2 == 0)
    {
        yess;
        return;
    }

    if (ans < k && rem % 2 != 0 && n % 2 == 1)
    {
        yess;
        return;
    }

    no;
    return;
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