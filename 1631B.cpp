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
    in(n);
    vi a(n);
    bool allequal=true;
    fr(i,0,n){
        cin>>a[i];
    }
    fr(i,0,n-1){
        if(a[i]!=a[i+1]){
            allequal=false;
        }
    }
    if(allequal){
        cout<<"0\n";
        return;
    }
    int last = a[n-1];
    int op=0;
    int x=1;
    for(int i=n-2;i>=0;i--){
        if(a[i]==last){
            x++;
            continue;
        }
        else{
            for(int j=0;j<x;j++){
                if((i-j)<0) break;
                a[i-j]=last;
            }
            op++;
            i-=x;
            x=2*x;
        }
    }
    cout<<op<<endl;


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