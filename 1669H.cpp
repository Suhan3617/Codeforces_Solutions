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
    in(n);in(k);
    vi a(n);
    fr(i,0,n){
        cin>>a[i];
    }
    map<int,int> mp;
    fr(i,0,32){
        mp[i]=0;
    }
    fr(i,0,n){
        fr(j,0,32){
            if(a[i]&(1<<j)){
                mp[j]++;
            }
        }
    }
    rfr(i,30,0){
        int req=n-mp[i];
        if(req<=k){
            k-=req;
            mp[i]=n;
        }
        if(k==0){
            break;
        }
    }
    int sum=0;
    for(auto it:mp){
        if(it.second==n){
            sum+=(1<<it.first);
        }
    }
    cout<<sum<<endl;
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