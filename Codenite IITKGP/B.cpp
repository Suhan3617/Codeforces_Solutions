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
    set<int> divs;

    int tmp = k;

    if (tmp % 2 == 0)
    {
        int p = 1;
        while (tmp % 2 == 0)
        {
            p *= 2;
            tmp /= 2;
        }
        divs.insert(p);
    }

    for (int i = 3; i * i <= tmp; i += 2)
    {
        if (tmp % i == 0)
        {
            int p = 1;
            while (tmp % i == 0)
            {
                p *= i;
                tmp /= i;
            }
            divs.insert(p);
        }
    }
    if (tmp > 1)
    {
        divs.insert(tmp);
    }

    int md = 0;
    if (!divs.empty())
    {
        md = *divs.rbegin();
    }
    else
    {
        md = 1;
    }
    if (md > n)
    {
        no;
    }
    else
    {
        yess;
        vi permutation;
        for (auto d : divs)
        {
            permutation.pb(d);
        }
        vector<bool> used(n + 1, false);
        for (auto d : divs)
        {
            used[d] = true;
        }
        fr(i, 1, n + 1)
        {
            if (!used[i])
            {
                permutation.pb(i);
            }
        }
        fr(i, 0, n)
        {
            cout << permutation[i] << " ";
        }
        cout << endl;
    }
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