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
    vector<int> b,c;
    int mx=*max_element(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(a[i]!=mx){
            b.push_back(a[i]);
        }
        else{
            c.push_back(a[i]);
        }
    }
    if(b.size()==0){
        cout<<"-1"<<endl;
    }
    else{
        cout<<b.size()<<" "<<c.size()<<'\n';
        for(auto &i:b){
            cout<<i<<" ";
        }
        cout<<endl;
        for(auto &j:c){
            cout<<j<<" ";
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