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
    int count=0;
    for(int i=1;i<=100;i++){
        for(int j=1;j<=100;j++){
            if(i==(n-j)){
                count++;
            }
        }
    }
    cout<<count<<endl;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}