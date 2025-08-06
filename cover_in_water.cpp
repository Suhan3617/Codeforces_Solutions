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
    string s;
    cin>>s;
    bool con_three_empty=false;
    int total=0;
    for(int i=0;i<n;i++){
        if(s[i]=='.' && i+1<n && s[i+1]=='.' && i+2<n && s[i+2]=='.'){
            con_three_empty=true;
            break;
        }
        if(s[i]=='.'){
            total++;
        }
    }
    if(con_three_empty){
        cout<<"2"<<endl;
    }
    else{
        cout<<total<<endl;
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