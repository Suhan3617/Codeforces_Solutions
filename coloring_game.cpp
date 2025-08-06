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

bool isvalid(int a, int b, int c, int mx)
{
    return (a + b > c) && (b + c > a) && (a + c > b) && (a + b + c > mx);
}
void solve()
{
    in(n);
    vi a(n);
    fr(i, 0, n)
    {
        cin >> a[i];
    }
    int ans=0; int mx=a[n-1];
    fr(k,2,n){
        int tgt= max(mx-a[k],a[k]);
        int i=0 , j=k-1,cnt=0;
        while(i<j){
            if(a[i]+a[j]>tgt){
                cnt+=(j-i);
                j--;
            }
            else{
                i++;
            }
        }
        ans+=cnt;
    }
    cout << ans << endl;
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