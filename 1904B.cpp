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
    in(n);
    vpii a(n);
    int b;
    fr(i, 0, n)
    {
        cin >> b;
        a[i]={b,i};
    }
    vi prefix(n);
    sort(all(a));
    prefix[0]=a[0].fi;
    fr(i,1,n){
        prefix[i]=prefix[i-1]+a[i].fi;
    }
    vi ans(n);
    fr(i,0,n){
        int j=i;
        int found=i;
        while(j<n){
            pair<int,int>temp={prefix[j]+1,INT_MIN};
            int idx=lower_bound(a.begin(),a.end(),temp)-a.begin();
            idx--;
            if(idx==j){
                break;
            }
            found+=idx-j;
            j=idx;
        }
        ans[a[i].se]=found;
    }
    fr(i,0,n){
        cout<<ans[i]<<" ";
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