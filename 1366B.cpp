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
    in(n);in(x);in(m);
    vi l(m),r(m);
    fr(i,0,m){
        cin>>l[i]>>r[i];
    }
    int left=x , right=x;
    fr(i,0,m){
       if(l[i]<left && r[i]>=left && r[i]<=right){
        left=l[i];
       }
       if(l[i]>=left && l[i]<=right ){
        if(r[i]>right){
            right=r[i];
        }
       }
       if(l[i]<left && r[i]>right){
        left=l[i];
        right=r[i];
       }
    }
    cout<<right-left+1<<endl;
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