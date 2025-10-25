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
    vi a(n);
    int sum=0;
    vi count(1e6+1,0);
    fr(i,0,n){
        cin>>a[i];
        count[a[i]]++;
        sum+=a[i];
    }
    vi answers;
    fr(i,0,n){
        int new_sum=sum-a[i];
        count[a[i]]--;
        if(new_sum%2==0 && (new_sum/2)<=1e6 && count[new_sum/2]>0){
            answers.pb(i+1);
        }
        count[a[i]]++;
    }
    cout<<answers.size()<<endl;
    for(auto ans:answers){
        cout<<ans<<" ";
    }
    cout<<endl;
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