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
    int a[n];
    int freq[100005]={0};
    int dp[100005]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        freq[a[i]]++;
    }
    dp[1]=freq[1];
    for(int i=2;i<=1e5;i++){
        dp[i]=max(dp[i-1],dp[i-2]+i*freq[i]);
    }
    cout<<dp[100000];
}
int32_t main(){
    fastio;
    int t=1;
    while(t--){
        solve();
    }
}