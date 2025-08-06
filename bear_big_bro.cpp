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
int MAX=1e6;
void solve(){
    int a , b ;
    cin>>a>>b;
    for(int i=0;i<=MAX;i++){
        if(a>b){
            cout<<i<<endl;
            break;
        }
        a=a*3;
        b=b*2;
    }
}
int32_t main(){
    fastio;
    int t=1;
    while(t--){
        solve();
    }
    return 0;
}