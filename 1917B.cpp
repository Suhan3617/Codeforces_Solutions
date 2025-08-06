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

void solve()
{
    in(n);
    string s ;
    cin>>s;
    map<int,int> freq;
    int count=0;
    vi distinct(n,0);
    fr(i,0,n){
        freq[s[i]]++;
        if(freq[s[i]]==1){
            count++;
        }
        distinct[i]=count;
    }
    int ans=0;
    fr(i,0,n){
        ans+=distinct[i];
    }
    cout<<ans<<endl;
}

int32_t main()
{
    fastio;
    in(t);
    while(t--){
        solve();
    }
}