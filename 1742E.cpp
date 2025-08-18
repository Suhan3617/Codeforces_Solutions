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
#define lcm(a, b) ((a) / __gcd((a), (b)) * (b))
#define gcd(a, b) __gcd(a, b)
#define yess cout << "YES\n";
#define no cout << "NO\n"

void solve()
{
    in(n);in(q);
    vi a(n) , k(n) ,maxh(n);
    int maxi=0;
    fr(i,0,n){
        cin>>a[i];
        maxi=max(a[i],maxi);
        maxh[i]=maxi;
    }
    vi prefix(n);
    prefix[0]=a[0];
    fr(i,1,n){
        prefix[i]=prefix[i-1]+a[i];
    }
    fr(i,0,q){
        int x;
        cin>>x;
        auto it = upper_bound(maxh.begin() , maxh.end() , x);
        if(it==maxh.begin()){
            cout<<"0"<<" ";
            continue;
        }
        it=prev(it);
        int index=it-maxh.begin();
        cout<<prefix[index]<<" ";
    }
    cout<<endl;
}

int32_t main()
{
    fastio;
    in(t);
    while(t--){
        solve();
    }
}