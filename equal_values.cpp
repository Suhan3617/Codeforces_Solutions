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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=a[0]*(n-1);
    int k=1;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            k++;
            ans=min(ans,a[i]*(n-k));
        }
        else{
            k=1;
            ans=min(ans,a[i]*(n-k));
        }
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