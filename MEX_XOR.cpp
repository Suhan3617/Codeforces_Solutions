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
#define yess cout << "YES\n";
#define no cout << "NO\n"

int xor_0_to_n(int n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0; // n % 4 == 3
}

void solve()
{
    in(a);
    in(b);
    int size=a;
    int a_xor=xor_0_to_n(a-1);
    int c=a_xor^b;
    if(c==0){
        cout<<size<<endl;
    }
    else if(c==a){
        cout<<size+2<<endl;
    }
    else{
        cout<<size+1<<endl;
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