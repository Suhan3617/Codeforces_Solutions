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
    string s;
    cin>>s;

    int n=s.size();

    vector<vi> dp(n+1,vi (4,0));
    fr(i,0,n){
        dp[i][0]=1;
    }
    fr(i,1,n){
        if(s[i]=='v' && s[i-1]=='v'){
            dp[i+1][1]+=dp[i-1][0];
            dp[i+1][3]+=dp[i-1][2];
        }
        else if(s[i]=='o'){
            dp[i+1][2]+=dp[i][1];
        }
        dp[i+1][1]+=dp[i][1];
        dp[i+1][2]+=dp[i][2];
        dp[i+1][3]+=dp[i][3];
    }
    cout<<dp[n][3]<<endl;
}

int32_t main()
{
    fastio;
    int t=1;
    while (t--)
    {
        solve();
    }
}