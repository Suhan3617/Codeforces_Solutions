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

const int mx = 1e7 + 1;

int32_t main()
{
    fastio;

    vector<bool> isprime(mx, true);
    isprime[0] = isprime[1] = false;

    for (int i = 2; i * i <= mx; i++)
    {
        if (isprime[i])
        {
            for (int j = i * i; j < mx; j += i)
            {
                isprime[j] = false;
            }
        }
    }

    vector<int> primeno;
    for (int i = 2; i < mx; i++)
    {
        if (isprime[i])
        {
            primeno.pb(i);
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int res = 0;
        for (int i = 1; i <= n; i++)
        {
            int prime = n / i;
            int x = upper_bound(primeno.begin(), primeno.end(), prime) - primeno.begin();
            res += x;
        }
        cout << res << endl;
    }
}
