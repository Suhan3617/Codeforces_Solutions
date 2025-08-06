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
    int n , k ; 
    cin>>n>>k;
    string s;
    cin>>s;
    set<char> u ;
    for(auto value:s){
        u.insert(value);
    }
    int odd=0;
    for(char value:u){
        int cnt=0;
        for(int v:s){
            if(value==v){
                cnt++;
            }
        }
        if(cnt%2!=0){
            odd++;
        }
    }
    if(odd<=k+1){
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