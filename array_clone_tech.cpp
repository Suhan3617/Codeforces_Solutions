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
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    int countmax=0;
    for(auto& i:mp){
        if(i.se>=countmax){
            countmax=i.se;
        }
    }
    int rem=n-countmax;
    int op=0;
    while(rem>0){
        op++;
        int add=min(countmax,rem);
        rem-=add;
        countmax+=add;
        op+=add;
    }
    cout<<op<<endl;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}