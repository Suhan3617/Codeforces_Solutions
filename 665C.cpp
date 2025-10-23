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
    st(s); 
    int n=s.size();  
    vector<char> ans(n);
    ans[0]=s[0];
    for(int i=1 ; i<n ; i++){
        if(s[i]==ans[i-1]){
            for(char c='a' ; c<='z' ; c++){
                if(c!=s[i-1]){
                    if(i<n-1 && c!=s[i+1]){
                        ans[i]=c;
                        break;
                    }
                    else if(i==n-1){
                        ans[i]=c;
                        break;
                    }
                }
            }
        }
        else{
            ans[i]=s[i];
        }
    }
    fr(i,0,n){
        cout<<ans[i];
    }
    cout<<endl;
}

int32_t main()
{
    fastio;
    int t=1;
    while (t--)
    {
        solve();
    }
}