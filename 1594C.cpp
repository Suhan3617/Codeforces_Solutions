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
    fr(i,0,n){
        if((i+1)%2==0){
            if(s[i]!=c){
                alleven=false;
                break;
            }
        }
    }
    if(allequal){
        cout<<"0\n";
        return;
    }
    if(alleven){
        cout<<"1\n";
        cout<<"2\n";
        return;
    }
    if(s[n-1]==c){
        cout<<"1\n";
        cout<<n<<endl;
    }
    else{
        cout<<"2\n";
        cout<<n<<" ";
        for(int x=1 ; x<n ; x++){
            if(n%x!=0){
                cout<<x<<" ";
                break;
            }
        }
        cout<<endl;
    }
}

int32_t main()
{
    fastio;
    in(t);
    while(t--){
        solve();
    }
}