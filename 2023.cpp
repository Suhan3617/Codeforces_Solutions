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
    int n, k;
    cin >> n >> k;
    int x = 2023;
    int prdt = 1;
    for (int i = 1; i <= n; i++)
    {
        int c;
        cin >> c;
        prdt *= c;
    }
    if (x % prdt == 0)
    {
        cout << "YES" << endl;
        cout << x / prdt << " ";
        for (int i = 1; i < k; i++)
        {
            cout << "1 ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
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