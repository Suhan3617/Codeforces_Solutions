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
    vector<vi> v;
    map<int,int> mp;
    fr(i,0,n){
        in(x);
        vi temp(x);
        fr(j,0,x){
            cin>>temp[j];
            mp[temp[j]]++;
        }
        v.pb(temp);
    }
    bool answer=false;
    fr(i,0,n){
        int f=1;
        for(auto it:v[i]){
            if(mp[it]==1){
                f=0;
                break;
            }
        }
        if(f==1){
            answer=true;
            break;
        }
    }
    if(answer){
        yess;
    }
    else{
        no;
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