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
    in(n);in(k);in(x);
    vi a(n);
    fr(i,0,n){
        cin>>a[i];
    }
    sort(all(a));
    // int arr_count=1;
    // fr(i,0,n-1){
    //     int diff=a[i+1]-a[i];
    //     if(diff>2*x){
    //         arr_count++;
    //     }
    //     else if(diff>x && diff<=2*x && k>0){
    //         k--;
    //     }
    //     else if(diff>x && diff<=2*x && k==0){
    //         arr_count++;
    //     }
    // }
    vi diff;
    fr(i,0,n-1){
        if(a[i+1]-a[i]>x){
            diff.pb(a[i+1]-a[i]);
        }
    }
    sort(all(diff));
    int arr_count=diff.size()+1;
    for(auto gap:diff){
        int val=(gap/x)+(gap%x!=0)-1;
        if(k>=val){
            k-=val;
            arr_count--;
        }
    }
    cout<<arr_count<<endl;
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