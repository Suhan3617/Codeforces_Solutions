#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define in(a) int a; cin >> a;
#define fr(i, x, y) for (int i = x; i < y; i++)
#define vi vector<int>

int query(int l , int r , vi &p){
    return p[r] - (l ? p[l-1] : 0);
}

void solve() {
    in(n); in(s);
    vi a(n);
    fr(i,0,n) cin >> a[i];

    vi prefix(n);
    prefix[0] = a[0];
    fr(i,1,n) prefix[i] = prefix[i-1] + a[i];

    int ans = LLONG_MAX;  // use LLONG_MAX for int64

    fr(i,0,n) {
        int l = i, r = n - 1, pos = -1;
        while(l <= r) {
            int mid = (l + r) >> 1;
            if(query(i, mid, prefix) <= s) {
                pos = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        if(pos == -1 || query(i, pos, prefix) != s) continue;
        ans = min(ans, n - (pos - i + 1));
    }

    cout << (ans == LLONG_MAX ? -1 : ans) << "\n";
}

int32_t main() {
    fastio;
    in(t);
    while(t--) solve();
}
