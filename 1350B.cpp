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
    vi a(n+1);
    fr(i,1,n+1){
        cin>>a[i];
    }
    vi dp(n+1);
    fr(i,1,n+1){
        dp[i]=1;
    }
    int answer=1;
    for(int i=2 ; i<=n ; i++){
        for(int j=1;j*j<=n;j++){
            if(i%j==0){
                continue;
            }
            if(a[j]<a[i]){
                dp[i]=max(dp[i],dp[j]+1);
            }
            int k=i/j;
            if(a[k]<a[i]){
                dp[i]=max(dp[i],dp[k]+1);
            }
        }
        answer=max(answer,dp[i]);
    }
    cout<<answer<<endl;
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