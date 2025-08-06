#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long double ld;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int solve(){
    int n;
    cin>>n;
    int moves=0;
    while(n!=1){
        if(n%6!=0 && n%2==1){
            n*=2;
            moves++;
        }
        else if(n%6!=0 && n%2==0){
            return -1;
        }
        else{
            n/=6;
            moves++;
        }
    }
    return moves;
}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<'\n';
    }
}