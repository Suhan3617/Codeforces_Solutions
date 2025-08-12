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
    in(k);
    vi w(7);
    int weektours=0;
    fr(i,0,7){
        cin>>w[i];
        if(w[i]==1){
            weektours++;
        }
    }
    int fullweeksstay=(k-1)/weektours;
    int rem=k-fullweeksstay*weektours;

    vi double_w(14);
    fr(i,0,7){
        double_w[i]=w[i];
        double_w[i+7]=w[i];
    }
    int min_stay=1e9;

    fr(i,0,7){
        int current=0;
        int current_stay=0;
        for(int j=i; j<i+14;j++){
            current+=double_w[i];
            current_stay++;
            if(current==rem){
                min_stay=min(min_stay,current_stay);
                break;
            }
        }
    }
    int total=fullweeksstay*7 + min_stay;
    cout<<total<<endl;
}

int32_t main()
{
    fastio;
    in(t);
    while(t--){
        solve();
    }
}