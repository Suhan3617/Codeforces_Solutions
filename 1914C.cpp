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
    vi a(n),b(n);
    fr(i,0,n){
        cin>>a[i];
    }
    fr(i,0,n){
        cin>>b[i];
    }
    fr(i,1,n){
        b[i]=max(b[i],b[i-1]);
    }
    int bestsum=0;
    int currentsum=0;
    for(int i=0;i<min(n,k);i++){
        currentsum+=a[i];
        int rem = k-(i+1);
        if(rem>0){
            int current = currentsum+rem*b[i];
            bestsum=max(bestsum,current);
        }
        else{
            bestsum=max(bestsum,currentsum);
        }
    }
    cout<<bestsum<<endl;
    
}

int32_t main()
{
    fastio;
    in(t);
    while(t--){
        solve();
    }
}