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

const int mod=998244353;

void solve()
{
    st(s);
    int n=s.size();
    int ans=1;
    int anslen=1;
    int curr=1;
    fr(i,1,n){
        if(s[i]!=s[i-1]){
            anslen++;
            ans=(ans*curr)%mod;
            curr=1;
        }
        else{
            curr++;
        }
    }
    ans=(ans*curr)%mod;
    for(int i=1;i<=n-anslen;i++){
        ans=(ans*i)%mod;
    }
    cout<<n-anslen<<" "<<ans<<endl;
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