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
    in(n);in(x);in(y);
    vi a(n);
    int odds=0;
    fr(i,0,n){
        cin>>a[i];
        if(a[i]%2==1){
            odds++;
        }
    }
    int alicestart=x%2;
    int bobstart=1-alicestart;

    int aliceend , bobend;
    if(odds%2==0){
        aliceend=alicestart;
        bobend=bobstart;
    }
    else{
        aliceend=1-alicestart;
        bobend=1-bobstart;
    }
    if(y%2==aliceend){
        cout<<"Alice\n";
    }
    else{
        cout<<"Bob\n";
    }
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