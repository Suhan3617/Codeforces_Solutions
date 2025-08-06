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
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto & i:a){
        cin>>i;
    }
    const int mx=2e5+1;
    vector<int> dp(mx);
    sort(a.begin(),a.end());
    dp[a[0]]=1;
    for(int i=1;i<n;i++){
        dp[a[i]]=dp[a[i]]+1;
        if(a[i]!=1){
            dp[a[i]]=max(dp[a[i]],dp[1]+1);
        }
        for(int j=2;j*j<=a[i];j++){
            if(a[i]%j==0){
                dp[a[i]]=max(dp[a[i]],dp[j]+1);
                dp[a[i]]=max(dp[a[i]],dp[a[i]/j]+1);
            }
        }
    }
    int ans=0;
    for(int i=0;i<=mx;i++){
        ans=max(ans,dp[i]);
    }
    cout<<n-ans<<endl;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}