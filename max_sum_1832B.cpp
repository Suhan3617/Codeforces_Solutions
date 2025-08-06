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
#define yess cout << "YES\n";
#define no cout << "NO\n"

void solve()
{
    in(n);
    in(k);
    vi a(n);
    fr(i, 0, n)
    {
        cin >> a[i];
    }

    // sort(all(a));
    // while (k > 0)
    // {
    //     if (a.size() == 2)
    //     {
    //         a.pop_back();
    //         break;
    //     }
    //     int last = a.back();
    //     if (a[0] + a[1] >= last)
    //     {
    //         a.pop_back();
    //     }
    //     else
    //     {
    //         a.erase(a.begin() + 0);
    //         a.erase(a.begin() + 1);
    //     }
    //     k--;
    // }
    // int v = a.size();
    // int ans = 0;
    // fr(i, 0, v)
    // {
    //     ans += a[i];
    // }
    // cout << ans << endl;
    sort(all(a));

    vi prefix_sum(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        prefix_sum[i + 1] = prefix_sum[i] + a[i];
    }

    int max_sum=0;

    fr(i,0,k+1){
        int min_num_removed=2*i;
        int max_num_removed=k-i;
        int curr_sum=prefix_sum[n-max_num_removed]-prefix_sum[min_num_removed];

        if(i==0){
            max_sum=curr_sum;
        }
        else{
            max_sum=max(max_sum,curr_sum);
        }
    }
    cout<<max_sum<<endl;
    
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