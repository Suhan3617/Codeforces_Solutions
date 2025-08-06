#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long double ld;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int find_longest_subarray(vector<int> &a, int k)
{
    int n = a.size();
    int maxlen = 0;
    int start = 0;
    int end = 0;
    int l = 0;
    for (int r = 0; r < n; r++)
    {
        if (a[r] > k)
        {
            l = r + 1;
        }
        else
        {
            if (r - l + 1 > maxlen)
            {
                maxlen = r - l + 1;
                start = l;
                end = r;
            }
        }
    }
    return maxlen;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << "0" << endl;
    }
    else
    {
        sort(a.begin(), a.end());
        vector<int> dif(n - 1);
        dif[0] = a[1] - a[0];
        for (int i = 1; i < n - 1; i++)
        {
            dif[i] = a[i + 1] - a[i];
        }
        int c = find_longest_subarray(dif, k);
        cout << (n - 1 - c) << endl;
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