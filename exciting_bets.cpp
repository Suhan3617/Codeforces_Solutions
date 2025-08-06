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
    int a , b ;
    cin>>a>>b;
    int mx=0;
    int mn=0;
    if(a==b){
        mx=0;
        mn=0;
    }
    else {
        mx=abs(a-b);
        mn=min((mx-b%mx) , b%mx);
    }
    cout<<mx<<" "<<mn<<endl;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}