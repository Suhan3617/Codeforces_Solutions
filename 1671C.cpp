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

bool check(int val , int ind , int x , int mid){
    if((val+(1ll*(ind+1)*(mid-1)))<=x){
        return true;
    }
    return false;
}

int binsearch(int val , int ind , int x){
    int l=1 , r =1e9+5 ;
    int pos=0;
    
    while (l<=r)
    {
        int mid = (l+r)/2;
        if(check(val,ind,x,mid)){
            pos=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return pos;
}

void solve()
{
    in(n);in(x);
    vi a(n);
    fr(i,0,n){
        cin>>a[i];
    }
    sort(all(a));
    vi prefix(n);
    prefix[0]=a[0];
    fr(i,1,n){
        prefix[i]=prefix[i-1]+a[i];
    }
    int sugar=0;
    fr(i,0,n){
        sugar+=binsearch(prefix[i],i,x);
    }
    cout<<sugar<<endl;
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