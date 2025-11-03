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
    in(n);in(m);
    vi nearestenemy(n+1,0);
    fr(i,0,m){
        int a , b ;
        cin>>a>>b;
        if(a>b){
            swap(a,b);
        }
        nearestenemy[b]=max(nearestenemy[b],a);
    }
    vi maxleft(n+1);
    maxleft[1]=1;
    int ans=1;
    fr(i,2,n+1){
        maxleft[i]=max(maxleft[i-1],nearestenemy[i]+1);
        ans+=(i-maxleft[i]+1);
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