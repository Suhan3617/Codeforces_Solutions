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
    vi a(n);
    fr(i, 0, n)
    {
        cin >> a[i];
    }
    // int dp[2][n];
    // int curr=0; // 0-> negative & 1-> positive
    // if(a[0]>0){
    //     dp[1][0]=1;
    //     dp[0][0]=0;
    //     curr=1;
    // }
    // else{
    //     dp[1][0]=0;
    //     dp[0][0]=1;
    // }
    // // cout<<dp[0][0]<<" "<<dp[1][0]<<endl;
    // fr(i, 1, n)
    // {
    //     if (a[i] > 0 && curr==1)
    //     {
    //         dp[1][i]=dp[1][i-1]+1;
    //         dp[0][i]=dp[0][i-1];
    //         curr=1;
    //     }
    //     else if (a[i]>0 && curr==0)
    //     {
    //         dp[1][i]=dp[1][i-1];
    //         dp[0][i]=dp[0][i-1]+1;
    //         curr=0;
    //     }
    //     else if(a[i]<0 && curr==1){
    //         dp[1][i]=dp[1][i-1];
    //         dp[0][i]=dp[0][i-1]+1;
    //         curr=0;
    //     }
    //     else if(a[i]<0 && curr==0){
    //         dp[1][i]=dp[1][i-1]+1;
    //         dp[0][i]=dp[0][i-1];
    //         curr=1;   
    //     }
    // }
    // int neg=0;int pos=0;
    // fr(i,0,n){
    //     neg+=dp[0][i];
    //     pos+=dp[1][i];
    // }
    // cout<<neg<<" "<<pos<<endl;
     int even = 1 , odd = 0 , curr = 0 , ans = 0 ;
     fr(i,0,n){
        if(a[i]<0){
            curr=1-curr;
        }
        if(curr==0){
            ans+=even;
            even++;
        }
        else{
            ans+=odd;
            odd++;
        }
    }
    cout<<1ll*n*(n+1)/2 - ans <<" "<<ans<<endl;
}

int32_t main()
{
    fastio;
    int t = 1;
    while (t--)
    {
        solve();
    }
}