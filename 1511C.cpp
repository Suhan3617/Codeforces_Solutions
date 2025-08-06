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
    in(n);in(q);
    vi positions(51,0);
    vi deck(n);
    fr(i,0,n){
        in(color);
        deck[i]=color;
        if(positions[color]==0){
            positions[color]=i+1;
        }
    }
    while(q--){
        in(query_color);
        int currentpos=positions[query_color];
        cout<<currentpos<<" ";
        for(int c=1;c<=50;c++){
            if(positions[c]>0 && positions[c]<currentpos){
                positions[c]++;
            }
        }
        positions[query_color]=1;
    }
    cout<<endl;
}

int32_t main()
{
    fastio;
    solve();
}