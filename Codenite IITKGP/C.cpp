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
    fr(i,0,n){
        cin>>a[i];
    }
    int xor_array=a[0];
    fr(i,1,n){
        xor_array^=a[i];
    }
    if(n==1){
        cout<<a[0]<<endl;
        return;
    }
    else if(n==2){
        if(a[0]<=a[1]){
            cout<<a[0]<<" "<<a[1]<<endl;
            return;
        }
        int temp_xor=a[0]^a[1];
        if(temp_xor<=a[1]){
            cout<<temp_xor<<" "<<a[1]<<endl;
            return;
        }
        cout<<"-1\n";
        return;
    }
    else{
        int xor1=0;
        fr(i,0,n-1){
            xor1^=i;
        }
        int last_ele=xor_array^xor1;
        if(last_ele>=n-2){
            fr(i,0,n-1){
                cout<<i<<" ";
            }
            cout<<last_ele<<endl;
            return;
        }
        else{
            cout<<"-1"<<endl;
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
        solve();
    }
}