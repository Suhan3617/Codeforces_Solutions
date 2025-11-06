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

vi p2(19),p5(19);

void solve()
{
    in(n);in(m);
    int temp=n;
    int cnt2=0; int cnt5=0;
    while(temp%2==0){
        cnt2++;
        temp/=2;
    }
    temp = n;
    while(temp%5==0){
        cnt5++;
        temp/=5;
    }
    for(int digit = 18 ; digit>=0 ; digit--){
        int extra2=max(0ll,digit-cnt2);
        int extra5=max(0ll,digit-cnt5);
        // int need=(1<<extra2)*fastPower(extra5);
        int need=p2[extra2]*p5[extra5];
        if(need<=m){
            int k=m-m%need;
            cout<<1ll*n*k<<endl;
            return;
        }
    }
}

int32_t main()
{
    fastio;
    in(t);
    while (t--)
    {
        p2[0]=1,p5[0]=1;
        fr(i,1,19){
            p2[i]=2*p2[i-1];
            p5[i]=5*p5[i-1];
        }
        solve();
    }
}