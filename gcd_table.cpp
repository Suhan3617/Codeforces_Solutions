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
    map<int,int,greater<int>>freq;
    for(int i=0;i<n*n;i++){
        int x;
        cin>>x;
        freq[x]++;
    }
    vector<int> ans;
    for(auto it=freq.begin();it!=freq.end();){
        if(it->se > 0){
            freq[it->fi]--;
            for(int i=0;i<ans.size();i++){
                freq[__gcd(ans[i],(it->fi))]-=2;
            }
            ans.pb(it->first);
        }
        else{
            it++;
        }
    }
    for(auto& i:ans){
        cout<<i<<" ";
    }
}
int32_t main(){
    fastio;
    int t=1;
    while(t--){
        solve();
    }
}