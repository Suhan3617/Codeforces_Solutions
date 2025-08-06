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

const int mod=1e9+7;

void solve()
{
    in(n);
    vi a(n),b(n);
    fr(i,0,n){
        cin>>a[i];
    }
    fr(i,0,n){
        cin>>b[i];
    }
    sort(all(a));
    sort(all(b));

    // vi store(n,0);
    // int i=n-1 , j=n-1;
    // int cnt=0;
    // while(i>=0 && j>=0){
    //     if(a[i]>a[j]){
    //         cnt++;
    //         i--;
    //     }
    //     else{
    //         store[j]=cnt;
    //         j--;
    //     }
    // }

    // while(j>=0){
    //     store[j--]=cnt;
    // }
    int ans=1LL;
    // int k=0;
    // for(int i=n-1;i>=0;i--){
    //     int mul = store[i]-(k++);
    //     if(mul>=0){
    //         ans=(ans*(mul%mod))%mod;
    //     }
    // }

    for(int i=n-1;i>=0;i--){
        auto ind = upper_bound(all(a),b[i])-a.begin();
        ans*=((n-ind)-(n-(i+1)))*1LL;
        ans%=mod;
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