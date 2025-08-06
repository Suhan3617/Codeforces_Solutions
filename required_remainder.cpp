#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define fi first 
#define se second 
#define pb push_back
#define mp make_pair
typedef long double ld;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);


void solve(){
    int x , y , n ;
    cin>>x>>y>>n;
    int k=((n-y)/x)*x + y ;
    cout<<k<<endl;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}