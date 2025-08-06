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
    string s;
    cin>>s;
    if(s[0]==s[s.size()-1]){
        cout<<s<<endl;
    }
    else if(s[0]=='a'){
        s[0]='b';
        cout<<s<<endl;
    }
    else{
        s[0]='a';
        cout<<s<<endl;
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