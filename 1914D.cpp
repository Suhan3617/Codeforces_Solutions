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

vector<int> findMax3(vector<int>& arr) {
    int n = arr.size();
    vector<pair<int,int>> a(n);
    for (int i = 0; i < n; i++) {
        a[i].first = arr[i];
        a[i].second = i;
    }

    sort(a.rbegin(), a.rend());

    vector<int> ans;
    for (int i = 0; i < min(3ll, n); i++) {
        ans.push_back(a[i].second);
    }
    return ans;
}

void solve()
{
    in(n);
    vi a(n) , b(n) , c(n);
    fr(i,0,n){
        cin>>a[i];
    }
    fr(i,0,n){
        cin>>b[i];
    }
    fr(i,0,n){
        cin>>c[i];
    }
    vi maxa=findMax3(a);
    vi maxb=findMax3(b);
    vi maxc=findMax3(c);
    int ans=0;
    fr(i,0,3){
        fr(j,0,3){
            fr(k,0,3){
                int x=maxa[i] , y=maxb[j] , z=maxc[k];
                if((x==y) || (y==z) || (z==x)){
                    continue;
                }
                ans=max(ans,a[x]+b[y]+c[z]);
            }
        }
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