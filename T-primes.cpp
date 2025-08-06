#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);    
const int MAX=1000000;
int32_t main(){
    vector<bool> sieve(MAX+1 , true);
    sieve[0]=sieve[1]=false;
    for(int i=2;i*i<=MAX;i++){
        if(sieve[i]){
            for(int j=i*i;j<=MAX;j+=i){
                sieve[j]=false;
            }
        }
    }
    map<ll , bool> tprime;
    for(int i=2;i<=MAX ;i++){
        if(sieve[i]){
            tprime[1ll*i*i]=true;
        }
    }
    ll t;
    cin>>t;
    while(t--){
        ll x;
        cin>>x;
        if(tprime[x]){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
}