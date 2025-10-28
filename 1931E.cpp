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
    in(n);in(m);
    int mp[n]{};
    vi a(n);
    fr(i,0,n){
        cin>>a[i];
    }
    int totaldigits=0;
    fr(i,0,n){
        while(a[i]%10==0){
            mp[i]++;
            totaldigits++;
            a[i]/=10;
        }
        while(a[i]>0){
            totaldigits++;
            a[i]/=10;
        }
    }
    sort(mp, mp + n, greater<>());
    for(int i=0;i<n;i+=2){
        totaldigits-=mp[i];
    }
    if(totaldigits>m){
        cout<<"Sasha"<<endl;
    }
    else{
        cout<<"Anna"<<endl;
    }
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