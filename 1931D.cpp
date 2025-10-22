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
    in(x);
    in(y);
    vi a(n);
    fr(i,0,n){
        cin>>a[i];
    }
    map<int,vi > mp;
    fr(i,0,n){
        mp[a[i]%y].pb(a[i]);
    }
    int count=0;
    for(auto it:mp){
        vi v=it.second;
        map<int,int> mp1;
        fr(i,0,v.size()){
            mp1[v[i]%x]++;
        }
        for(auto ix:mp1){
            if(ix.first==0 || (ix.first==x/2 && x%2==0)){
                int c=ix.second;
                count+=(c*(c-1))/2;
                ix.second=0;
            }
            else{
                int b=ix.second;
                int d=mp1[x-ix.first];
                count+=b*d;
                mp1[x-ix.first]=0;
            }
        }
    }
    cout<<count<<endl;
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