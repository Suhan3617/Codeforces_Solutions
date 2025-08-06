#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long double ld;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    if (k == 1 && x == 1)
    {
        cout << "NO" << endl;
    }
    else if (x != 1 && k > 1)
    {
        cout << "YES" << '\n';
        cout << n << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "1 ";
        }
        cout << endl;
    }
    else if (x == 1 && k > 1)
    {
        if (n % 2 == 0)
        {
            cout << "YES" << '\n';
            cout << n / 2 << endl;
            for (int i = 0; i < n / 2; i++)
            {
                cout << "2 ";
            }
            cout << endl;
        }
        else
        {
            if (k >= 3 && n>=3)
            {
                cout << "YES" << '\n';
                cout << (n-3)/ 2 + 1 << endl;
                int a = (n-3)/ 2 ;
                for (int i = 0; i < a; i++)
                {
                    cout << "2 ";
                }
                cout << "3 " << endl;
            }
            else
            {
                cout << "NO" << '\n';
            }
        }
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