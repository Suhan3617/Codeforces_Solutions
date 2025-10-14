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
    in(n);in(m);
    vector<vector<int>> a(m,vi(n));
    fr(i,0,n){
        fr(j,0,m){
            cin>>a[j][i];
        }
    }
    fr(i,0,m){
        sort(a[i].begin(), a[i].end());
    }
    int sum=0;
    fr(i,0,m){
        fr(j,0,n){
            sum-=(a[i][j]*(n-j-1));
            sum+=(a[i][j]*j);
        }
    }
    cout<<sum<<endl;
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