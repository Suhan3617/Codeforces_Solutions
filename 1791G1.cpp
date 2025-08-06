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

bool cmp(pii a , pii b){
    return (a.fi+a.se)<(b.fi+b.se);
}
void solve()
{
    in(n);in(c);
    int coins=c;
    int ans=0;
    vi a(n);
    fr(i,0,n){
        cin>>a[i];
    }
    vpii sum(n);
    fr(i,0,n){
        sum[i]={a[i],i+1};
    }
    sort(all(sum) , cmp );
    fr(i,0,n){
        int coins_req=sum[i].fi+sum[i].se;
        if(coins<coins_req){
            break;
        }
        coins-=coins_req;
        ans++;
        if(coins<=0){
            break;
        }
    }
    cout<<ans<<endl;
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