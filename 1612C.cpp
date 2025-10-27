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
    in(k);in(x);
    int low=1 , high=2*k-1;
    int ans=2*k-1;
    while(low<=high){
        int mid=(low+high)/2;
        int value;
        if(mid<=k){
            value=mid*(mid+1)/2;
        }
        else{
            int a1=k*(k+1)/2;
            int a2=(k-1)*k/2;
            int c=2*k-1-mid;
            int a3=c*(c+1)/2;
            value=a1+a2-a3;
        }
        if(value>=x){
            high=mid-1;
            ans=mid;
        }
        else{
            low=mid+1;
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