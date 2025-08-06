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
    int x=0;
    if(a==1){
        x=b*b;
    }
    else {
        int g=__gcd(a,b);
        x=(a*b)/g;
        if(x==b){
            x=(b*b)/a;
        }
    }
    cout<<x<<endl;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}