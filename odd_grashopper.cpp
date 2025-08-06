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
    int n , x ;
    cin>>x>>n;
    int final_pos;
    if(n%4==0){
        final_pos=0;
    }
    else if(n%4==1){
        final_pos=-n;
    }
    else if(n%4==2){
        final_pos=1;
    }
    else{
        final_pos=n+1;
    }
    if(x%2==0){
        cout<<x+final_pos<<endl;
    }
    else{cout<<x-final_pos<<endl;}
}

int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}