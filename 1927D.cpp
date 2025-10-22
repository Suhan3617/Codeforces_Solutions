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
    vi a(n);
    fr(i,0,n){
        cin>>a[i];
    }
    vi last_diff(n,-1);
    fr(i,1,n){
        if(a[i]!=a[i-1]){
            last_diff[i]=i-1;
        }
        else{
            last_diff[i]=last_diff[i-1];
        }
    }
    in(q);
    while(q--){
        in(l);in(r);
        if(last_diff[r-1]>=l-1){
            cout<<last_diff[r-1]+1<<" "<<r<<endl;
        }
        else{
            cout<<"-1 -1"<<endl;
        }
    }
    cout<<endl;
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