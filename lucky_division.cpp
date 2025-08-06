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
    vector<int> a={4,7,47,74,44,77,444,447,477,777,774,744,747,474};
    for(int i=0;i<a.size();i++){
        if(n%a[i]==0){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int32_t main(){
    fastio;
    int t=1;
    while(t--){
        solve();
    }
}