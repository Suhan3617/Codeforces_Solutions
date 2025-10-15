#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define in(a) int a; cin >> a;
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
#define no cout << "NO\n";

void solve()
{
    in(n);
    vector<string> v(n);

    for(auto &row:v){
        cin>>row;
    }

    int ans = 0;

    for (int i = 0; i < n / 2; i++) {
        for (int j=i; j < n - i- 1; j++) {
            int count1 = 0;

            if (v[i][j] == '1') count1++;
            if (v[n - i - 1][n - j - 1] == '1') count1++; 
            if (v[j][n - i - 1] == '1') count1++;
            if (v[n - j - 1][i] == '1') count1++;

            ans += min(count1, 4- count1);
        }
    }

    cout << ans << "\n";
}

int32_t main()
{
    fastio;
    in(t);
    while (t--) solve();
}
