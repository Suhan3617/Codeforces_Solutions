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
    int n , k;
    cin>>n>>k;
    vector<int> a(n*k);
    for(int i=0;i<n*k;i++){
        cin>>a[i];
    }
    int sum=0;
    int pointer=n*k;
    while(k--){
        pointer-=(n/2+1);
        sum+=a[pointer];
    }
    cout<<sum<<endl;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}