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
    int count0=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            count0++;
        }
    }
    if(count0==n){
        cout<<"0"<<endl;
    }
    else if(count0==0){
        cout<<"1"<<endl;
    }
    else{
        int cur=0;
        for(int i=0;i<n;i++){
            if(a[i]!=0){
                break;
            }
            cur++;
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]!=0){
                break;
            }
            cur++;
        }
        if(cur==count0){
            cout<<"1"<<endl;
        }
        else{
            cout<<"2"<<endl;
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