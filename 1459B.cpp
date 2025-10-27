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
    int k=n/2;
    int ans=0;
    if(n%2==0){
        ans=(k+1)*(k+1);
    }
    else{
        ans=2*(k+1)*(k+2);
    }
    cout<<ans<<endl;
}

int32_t main()
{
    fastio;
    int t=1;
    while (t--)
    {
        solve();
    }
}