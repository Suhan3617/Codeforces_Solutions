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
    int a , b , c;
    cin>>a>>b>>c;
    if(((a+c)%(2*b)==0 )|| ((2*b-a)>0 && (2*b-a)%c==0) || ((2*b-c)>0 && (2*b-c)%a==0)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
