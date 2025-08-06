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

int countwater(vi& a , int h){
    int n=a.size();
    int count=0;
    fr(i,0,n){
        if(a[i]<=h){
            count+=(h-a[i]);
        }
    }
    return count;
}

void solve()
{
    in(n);in(x);
    vi a(n);
    fr(i,0,n){
        cin>>a[i];
    }
    if(n==1){
        cout<<a[0]+x<<endl;
        return;
    }
    int maxi=*max_element(all(a));
    int low=1 , high = maxi+x ;
    int ans=0;
    while(low<=high){
        int mid=low+(high-low)/2 ;
        if(countwater(a,mid)<=x){
            low=mid+1;
            ans=mid;
        }
        else{
            high=mid-1;
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