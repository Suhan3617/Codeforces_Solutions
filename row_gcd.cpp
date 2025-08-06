#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define max3(a,b,c) max(max(a,b),c)
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define fr(i,n) for(ll i=0;i<n;i++)

ll gcd(ll a, ll b){
    return b==0 ? a : gcd(b,a%b);
}

int32_t main(){
    fastio;
    ll n , m ;
    cin>>n>>m;
    vector<ll> a(n) , b(m);
    for(auto &i:a){
        cin>>i;
    }
    for(auto &j:b){
        cin>>j;
    }
    ll x=0;
    fr(i,n){
        x=gcd(x,abs(a[i]-a[0]));
    }
    fr(i,m){
        cout<<gcd(a[0]+b[i] , x)<<" ";
    }
}