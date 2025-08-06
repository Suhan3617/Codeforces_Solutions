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
    sort(a.begin(),a.end());
    int mx=a[n-1];
    int mn=a[0];
    if(mx==mn){
        cout<<"NO"<<'\n';
    }
    else{
        cout<<"YES"<<'\n';
        cout<<mx<<" ";
        for(int i=0;i<n-1;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}