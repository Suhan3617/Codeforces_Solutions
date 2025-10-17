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
#define lcm(a, b) ((a) / __gcd((a), (b)) * (b))
#define gcd(a, b) __gcd(a, b)
#define yess cout << "YES\n";
#define no cout << "NO\n"

void solve()
{
    in(n);
    char c;
    cin>>c;
    string s;
    cin>>s;

    bool allequal=true;
    bool alleven=true;
    fr(i,0,n){
        if(s[i]!=c){
            allequal=false;
            break;
        }
    }
    if(allequal){
        cout<<"0\n";
        return;
    }
    int val=-1;
    for(int i=2;i<=n;i++){
        bool isposs=true;
        for(int j=i;j<=n;j+=i){
            if(s[j-1]!=c){
                isposs=false;
                break;
            }
        }
        if(isposs){
            val=i;
            break;
        }
    }
    if(val!=-1){
        cout<<"1\n";
        cout<<val<<endl;
        return;
    }
    cout<<"2\n";
        cout<<n<<" "<<n-1<<endl;
}

int32_t main()
{
    fastio;
    in(t);
    while(t--){
        solve();
    }
}