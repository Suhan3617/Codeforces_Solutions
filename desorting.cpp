#include <bits/stdc++.h>
using namespace std;
#define int long long
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
    int ops=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<=a[i+1]){
            int diff=a[i+1]-a[i];
            int req_ops=diff/2+1;
            ops=min(ops,req_ops);
        }
        else{
            ops=0;
        }
    }
    cout<<ops<<endl;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}