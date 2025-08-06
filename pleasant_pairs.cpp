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
    for(auto& i:a){
        cin>>i;
    }
    int count = 0 ; int i=0;int j=1;
    while(i<n && j>i && j<n){
        if(a[i]*a[j]==(i+j+2)){
            count++;
            i++;
            j++;
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