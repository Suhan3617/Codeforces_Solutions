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

void solve()
{
    in(a);
    in(b);
    if(a==b){
        cout<<"0"<<endl;
        return;
    }
    int ra=a;
    int rb=b;
    while(ra%2==0){
        ra/=2;
    }
    while(rb%2==0){
        rb/=2;
    }
    if(ra!=rb){
        cout<<"-1"<<endl;
        return;
    }
    else{
        a/=ra;
        b/=rb;
        a=log2(a);
        b=log2(b);
        int ans=ceil(abs(a-b)/3.0);
        cout<<ans<<endl;
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