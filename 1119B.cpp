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
    in(h);
    vi a(n);
    fr(i,0,n){
        cin>>a[i];
    }
    int ans=0;
    fr(k,1,n+1){
        vi temp;
        fr(i,0,k){
            temp.pb(a[i]);
        }
        sort(all(temp));
        int sum=0;
        if(k%2==0){
            for(int j=k-1;j>=1;j-=2){
                sum+=temp[j];
            }
        }
        else{
            for(int j=k-1;j>=0;j-=2){
                sum+=temp[j];
            }
        }
        // cout<<"k="<<k<<" "<<sum<<endl;
        if(sum<=h){
            ans=k;
        }
        else{
            break;
        }
    }
    cout<<ans<<endl;
}

int32_t main()
{
    fastio;
    int t=1;
    while (t--)
    {
        solve();
    }
}