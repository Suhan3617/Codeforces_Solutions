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
    fr(i,0,n){
        cin>>a[i];
    }
    map<int,int> mp;
    fr(i,0,n){
        mp[a[i]]++;
    }
    vi gifts;
    for(auto it:mp){
        gifts.pb(it.second);
    }
    sort(rall(gifts));
    int sum=gifts[0];
    int curr=gifts[0];
    int x=gifts.size();
    fr(i,1,x){
        if(gifts[i]<=curr-1){
            sum+=gifts[i];
            curr=gifts[i];
        }
        else{
            sum+=curr-1;
            curr--;
        }
        if(curr==0){
            break;
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