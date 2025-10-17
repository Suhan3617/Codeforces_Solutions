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


void solve()
{
    in(n);in(k);
    if(n%2==0){
        cout << (k % n == 0 ? n : k % n) << endl;
    }
    else{
        int a=n/2;
        int t=(k-1)/a;
        int a1=(k % n == 0 ? n : k % n);
        int a2=(t % n == 0 ? n : t % n);
        int a3=((a1+a2) % n == 0 ? n : (a1+a2) % n);
        cout<<a3<<endl;
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