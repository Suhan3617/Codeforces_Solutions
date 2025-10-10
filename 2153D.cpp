#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define read(x) int x; cin >> x;
#define F first
#define S second
#define pushb push_back
#define mkp make_pair
#define ld long double
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define fr(i, a, b) for (int i = a; i < b; i++)
#define rfr(i, a, b) for (int i = a; i >= b; i--)
#define vi vector<int>
#define pii pair<int, int>
#define vpi vector<pair<int, int>>
#define LCM(a, b) ((a) / __gcd((a), (b)) * (b))
#define GCD(a, b) __gcd(a, b)
#define YES cout << "YES\n"
#define NO cout << "NO\n"

const int INF = 4e18;

int diff3(int p, int q, int r) {
    int mx = max({p, q, r});
    int mn = min({p, q, r});
    return mx - mn;
}

int calc(const vi &nums) {
    int n = nums.size();
    if (n == 0) return 0;

    vi dp(n + 1, INF);
    dp[0] = 0;

    fr(i, 1, n + 1) {
        if (i >= 2 && dp[i - 2] != INF) {
            int val = dp[i - 2] + abs(nums[i - 1] - nums[i - 2]);
            dp[i] = min(dp[i], val);
        }
        if (i >= 3 && dp[i - 3] != INF) {
            int val = dp[i - 3] + diff3(nums[i - 1], nums[i - 2], nums[i - 3]);
            dp[i] = min(dp[i], val);
        }
    }
    return dp[n];
}

void solve_case() {
    read(n);
    vi arr(n);
    fr(i, 0, n) cin >> arr[i];

    int ans = calc(arr);

    if (n >= 2) {
        vi mid(arr.begin() + 1, arr.end() - 1);
        int sub = calc(mid);
        if (sub != INF) {
            int edge = abs(arr[0] - arr[n - 1]);
            ans = min(ans, edge + sub);
        }
    }

    if (n >= 3) {
        vi mid(arr.begin() + 1, arr.end() - 2);
        int sub = calc(mid);
        if (sub != INF) ans = min(ans, diff3(arr[n - 2], arr[n - 1], arr[0]) + sub);
    }

    if (n >= 3) {
        vi mid(arr.begin() + 2, arr.end() - 1);
        int sub = calc(mid);
        if (sub != INF) ans = min(ans, diff3(arr[n - 1], arr[0], arr[1]) + sub);
    }

    cout << ans << '\n';
}

int32_t main() {
    FAST;
    read(T);
    while (T--) solve_case();
    return 0;
}
