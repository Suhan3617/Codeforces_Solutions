#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long double ld;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int mn(int n)
{
    int com = n % 6;
    if (com == 0)
    {
        return n / 6;
    }
    else if (com == 2)
    {
        return (n - 8) / 6 + 2;
    }
    else if (com == 4)
    {
        return (n - 4) / 6 + 1;
    }
}
int mx(int n)
{
    int com = n % 4;
    if (com == 0)
    {
        return n / 4;
    }
    else
    {
        return (n - 6) / 4 + 1;
    }
}
int32_t main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 != 0 || n < 4)
        {
            cout << "-1" << '\n';
        }
        else
        {
            if (n == 4)
            {
                cout << "1" << " " << "1" << '\n';
            }
            else if (n == 6)
            {
                cout << "1" << " " << "1" << '\n';
            }
            else if (n == 8)
            {
                cout << "2" << " " << "2" << '\n';
            }
            else if (n == 12)
            {
                cout << "2" << " " << "3" << '\n';
            }
            else
            {
                int bus_max = mx(n);
                int bus_min = mn(n);
                cout << bus_min << " " << bus_max << '\n';
            }
        }
    }
}