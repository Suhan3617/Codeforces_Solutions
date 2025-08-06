#include <bits/stdc++.h>
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long
#define in(a) int a;cin>>a;
#define fi first 
#define se second 
#define pb push_back
#define mp make_pair
#define ld long double
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define fr(i,x,y) for(int i=x ; i<y ;i++)
#define rfr(i,x,y) for(int i=x ;i>=y ;i--)
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define lcm(a,b) (a/__gcd(a,b))
#define yess cout<<"YES\n";
#define no cout<<"NO\n"
const int mod= 998244353;

int power(int a, int b) {
    int res = 1;
    while(b) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

void solve(){
    in(n);
    vi p(n) , q(n) ;
    fr(i,0,n){
        cin>>p[i];
    }
    fr(i,0,n){
        cin>>q[i];
    }
    vi ans(n);
    for(int i=0;i<=n-1;i++){
        ans[i]=INT_MIN;
        for(int j=0;j<=i;j++){
            int c=((1<<p[j])+(1<<q[i-j]))%mod;
            ans[i]=max(ans[i],c)%mod;
        }
    }
    fr(i,0,n){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}