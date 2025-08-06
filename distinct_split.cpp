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
#define rfr(i,x,y) for(int i=y ;i>=x ;i--)
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define lcm(a,b) (a/__gcd(a,b))
#define yess cout<<"YES\n";
#define no cout<<"No\n"

void solve(){
    in(n);
    string s;
    cin>>s;
    unordered_set <char> st;
    vi prefix(n+1,0);
    vi suffix(n+1,0);
    for(int i=1;i<=n;i++){
        st.insert(s[i-1]);
        prefix[i]=st.size();
    }
    st.clear();
    for(int i=n;i>=1;i--){
        st.insert(s[i-1]);
        suffix[i]=st.size();
    }
    int ans=0;
    fr(i,0,n){
        ans=max(ans,prefix[i]+suffix[i+1]);
    }
    cout<<ans<<endl;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}