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
    int a=0;
    int b=0;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==1){
            a++;
        }
        else{
            b++;
        }
    }
    int ops=0;
    while(a<b || b%2==1){
        ops++;
        a++;
        b--;
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