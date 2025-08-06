#include<bits/stdc++.h>
using namespace std;
#define int long long 
typedef long double ld;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);  
void solve(){
    int n , m ;
    cin>>n>>m;

    vector<int> a(n);
    for(auto& i:a){
        cin>>i;
    }
    int l=0;int r=1e9;int ans=0;
    while(l<=r){
        int mid=l+(r-l)/2;
        int res=0;
        for(int i=0;i<n;i++){
            if(a[i]>mid){
                res+=a[i]-mid;
            }
        }
        if(res>=m){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans;
}
int32_t main(){
    fastio;
    solve();
}