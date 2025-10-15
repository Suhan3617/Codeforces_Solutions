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
    vi x(n),y(n);
    fr(i,0,n){
        cin>>x[i];
    }
    fr(i,0,n){
        cin>>y[i];
    }
    multiset<int> set;
    fr(i,0,n){
        set.insert(y[i]-x[i]);
    }
    int days=0;
    while(set.size()>1){
        int value_first=*set.begin();
        set.erase(set.begin());

        auto it=set.lower_bound(-value_first);

        if(it==set.end()){
            continue;
        }

        days++;
        set.erase(it);
    }
    cout<<days<<endl;
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