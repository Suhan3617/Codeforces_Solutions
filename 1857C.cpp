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
#define lcm(a, b) ((a) / __gcd((a), (b)) * (b))
#define gcd(a, b) __gcd(a, b)
#define yess cout << "YES\n";
#define no cout << "NO\n"

void solve()
{
    in(n);
    int m=n*(n-1)/2;
    vi b(m);
    vi a(n);
    fr(i,0,m){
        cin>>b[i];
    }
    sort(all(b));
    int i=1;
    int x=0;
    while(x<=(m-1)){
        a[i-1]=b[x];
        x+=(n-i);
        i++;
    }
    a[n-1]=a[n-2];
    fr(i,0,n){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int32_t main()
{
    fastio;
    in(t);
    while(t--){
        solve();
    }
}