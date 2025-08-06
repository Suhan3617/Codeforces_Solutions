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
    int n ;
    cin>>n;
    if(n%2==1){
        vector<int> v1;
        for(int i=0;i<n/2;i++){
            v1.pb(2*(i+1));
        }
        for(int j=n;j>0;j-=2){
            int c=j;
            v1.pb(c);
        }
        for(int i=0;i<n;i++){
            cout<<v1[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"1 ";
        for(int i=3;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<"2"<<endl;
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