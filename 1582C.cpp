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
    st(s);
    int ans=INT_MAX;
    for(char c='a' ; c<='z'; c++){
        int temp=0;
        int i=0 , j=n-1;
        bool possible=true;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            if(s[i]==c){
                temp++;
                i++;
            }
            else if(s[j]==c){
                temp++;
                j--;
            }
            else{
                possible=false;
                break;
            }
        }
        if(!possible){
            temp=INT_MAX;
        }
        ans=min(ans,temp);
        // cout<<ans<<endl;
    }
    if(ans==INT_MAX){
        cout<<"-1\n";
        return;
    }
    cout<<ans<<endl;
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