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

vpii v(200000);

bool check(int n , int mid){
    int L=0 , R=0;
    int PL , PR ;
    fr(i,0,n){
        PL=L-mid;
        PR=R+mid;
        int l=v[i].fi , r=v[i].se;
        L=max(PL,l);
        R=min(PR,r);
        if(L>R){
            return false;
        }
    }
    return true;
}

void solve()
{
    in(n);
    fr(i,0,n){
        cin>>v[i].fi>>v[i].second;
    }

    int ans=0;
    int low=0 , high = 1e9;
    while(low<=high){
        int mid=(low+high)/2;
        if(check(n,mid)){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<low<<endl;
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