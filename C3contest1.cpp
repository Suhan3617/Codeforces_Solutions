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

bool ispal(string& s){
    int i = 0, j = (int)s.size() - 1;
    while(i < j){
        if(s[i++] != s[j--]) return false;
    }
    return true;
}

void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    int count=0;
    fr(i,0,n){
        // string temp=s;
        // temp.insert(i,1,'a');
        // if(!ispal(temp)){
        //     yess;
        //     cout<<temp<<endl;
        //     return;
        // }
        if(s[i]=='a'){
            count++;
        }
    }
    if(count==n){
        no;
        return;
    }
    string p = "a"+s;
    if(!ispal(p)){
        yess;
        cout<<p<<endl;
        return;
    }
    string q=s+"a";
    if(!ispal(q)){
        yess;
        cout<<q<<endl;
        return;
    }
    no;
}

int32_t main()
{
    fastio;
    in(t);
    while(t--){
        solve();
    }
}