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
    int xk , yk , xq , yq ;
    cin>>xk>>yk;
    cin>>xq>>yq;
    if(a==b){
        vector<pii> k , q ;
        k.pb({xk+a,yk+a});
        k.pb({xk-a,yk-a});
        k.pb({xk-a,yk+a});
        k.pb({xk+a,yk-a});
        q.pb({xq+a,yq+a});
        q.pb({xq-a,yq-a});
        q.pb({xq-a,yq+a});
        q.pb({xq+a,yq-a});
        int count=0;
        for(auto p1:k){
            for(auto p2:q){
                if(p1==p2){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    else{
        vector<pii> k , q ;
        k.pb({xk+a,yk+b});
        k.pb({xk-a,yk-b});
        k.pb({xk+b,yk+a});
        k.pb({xk-b,yk-a});
        k.pb({xk-a,yk+b});
        k.pb({xk+a,yk-b});
        k.pb({xk-b,yk+a});
        k.pb({xk+b,yk-a});
        q.pb({xq+a,yq+b});
        q.pb({xq-a,yq-b});
        q.pb({xq+b,yq+a});
        q.pb({xq-b,yq-a});
        q.pb({xq - a, yq + b});
        q.pb({xq + a, yq - b});
        q.pb({xq - b, yq + a});
        q.pb({xq + b, yq - a});
        int count=0;
        for(auto p1:k){
            for(auto p2:q){
                if(p1==p2){
                    count++;
                }
            }
        }
        cout<<count<<endl;
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