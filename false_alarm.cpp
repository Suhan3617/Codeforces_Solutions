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
    int n , x;
    cin>>n>>x;
    vector<int> a(n);
    int c=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==1){
            c=i;
            break;
        }
    }
    if(n-c<=x){
        cout<<"YES"<<endl;
    }
    else{
        bool found = true;
        for(int j=c+x;j<n;j++){
            if(a[j]==1){
                found=false;
                break;
            }
        }
        if(found){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
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