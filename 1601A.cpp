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
    map<int,int> mp;
    fr(i,0,n){
        in(temp);
        fr(i,0,30){
            if(temp&(1<<i)){
                mp[i]++;
            }
        }
    }
    int ans=0;
    int f=1;
    for(auto it:mp){
        f=0;
        if(ans==0){
            ans=it.second;
        }
        else{
            ans=gcd(ans,it.second);
        }
    }
    if(f){
        fr(i,0,n){
            cout<<i+1<<" ";
        }
        cout<<endl;
        return;
    }
    vi factors;
    for(int i=1;i*i<=ans;i++){
        if(ans%i==0){
            factors.pb(i);
            if(i!=(ans/i)){
                factors.pb(ans/i);
            }
        }
    }
    sort(all(factors));
    for(auto it:factors){
        cout<<it<<" ";
    }
    cout<<endl;
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