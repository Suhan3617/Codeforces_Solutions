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
    int x_or=a[0];
    for(int i=1;i<n;i++){
        x_or=x_or^a[i];
    }
    if(n%2==0){
        if(x_or==0){
            cout<<"3"<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    else{
        cout<<x_or<<endl;
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