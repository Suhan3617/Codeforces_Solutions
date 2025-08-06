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
    int c=0;int c1=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
        int op=0;
        for(int i=n-2;i>=0;i--){
                while(a[i]>=a[i+1]){
                    a[i]/=2;
                    op++;
                    if(a[i]==0){
                        break;
                    }
                }
                if(a[i]==0 && a[i+1]==0){
                    op=-1;
                    break;
                }
        }
        cout<<op<<endl;
    
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}