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
    in(m);
    vi indices(m);
    fr(i, 0, m)
    {
        cin >> indices[i];
    }
    if(n==m){
        cout<<m<<endl;
        return;
    }
    sort(all(indices));
    vi gap;
    fr(i, 0, m - 1)
    {
        gap.pb(indices[i + 1] - indices[i] - 1);
    }
    gap.pb(indices[0] + n - indices[m - 1] - 1);
    sort(rall(gap));
    int days = 0;
    int saved = 0;
    // fr(i,0,m){
    //     cout<<gap[i]<<" ";
    // }
    // cout<<endl;
    fr(i, 0, m)
    {
        int current_length = gap[i] - 2 * days;
        // cout<<current_length<<endl;
        if (current_length > 0)
        {
            if (current_length >= 2)
            {
                days += 2;
                saved += (current_length - 1);
            }
            else if (current_length == 1)
            {
                days++;
                saved++;
            }
        }
    }
    cout << n - saved << endl;
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