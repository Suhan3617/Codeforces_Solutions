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
    int n , x ;
    cin>>n>>x;
    vector<int>a(n);
    int sum=0;
    for(auto & i:a){
        cin>>i;
    }
    for(int i=0;i<n;i++){
        sum+=double(a[i]);
    }
    int mn=ceil(sum*1.0/x);
    int mx=0;
    for(int i=0;i<n;i++){
        mx+=ceil(a[i]*1.0/x);
    }
    cout<<mn<<" "<<mx<<'\n';
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}