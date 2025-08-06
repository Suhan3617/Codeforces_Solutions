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

void solve()
{
    in(n);
    vi a(n);
    map<int, int> mp;
    set<int> s;
    map<int,bool> took;
    fr(i, 1, n+1)
    {
        mp[i] = 0;
    }
    fr(i, 0, n)
    {
        cin >> a[i];
        mp[a[i]] += 1;
    }
    vi nhi;
    for (auto &it : mp)
    {
        if (it.se == 0)
        {
            s.insert(it.fi);
        }
    }
    cout << s.size() << endl;
    if (s.size() != 0)
    {
        fr(i,0,n){
            if(took[a[i]]){
                a[i]=*s.begin();
                s.erase(s.begin());
            }
            else if(mp[a[i]]>1){
                if(*s.begin()<a[i]){
                    mp[a[i]]--;
                    a[i]=*s.begin();
                    s.erase(s.begin());
                }
                else{
                    took[a[i]]=true;
                }
            }
            else{
                took[a[i]]=true;
            }
        }
        fr(i, 0, n)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    fr(i, 0, n)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int32_t main()
{
    fastio;
    int t = 1;
    while (t--)
    {
        solve();
    }
}