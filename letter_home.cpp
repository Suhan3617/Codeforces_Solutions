#include <bits/stdc++.h>
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long
#define in(a) int a;cin>>a;
#define fi first 
#define se second 
#define pb push_back
#define mp make_pair
#define ld long double
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define fr(i,x,y) for(int i=x ; i<y ;i++)
#define rfr(i,x,y) for(int i=y ;i>=x ;i--)
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define lcm(a,b) (a/__gcd(a,b))
#define yess cout<<"YES\n";
#define no cout<<"No\n"

void solve(){
    in(n) ; in(s) ; 
    vi x(n);
    fr(i,0,n){
        cin>>x[i];
    }
    int ans=0;
    if(s<=x[0]){
        ans=abs(s-x[n-1]);
    }
    else if(x[0]<s && s<x[n-1]){
        ans=min(abs(s-x[0]), abs(s-x[n-1])) + abs(x[n-1] - x[0]);
    }
    else if(s>=x[n-1]){
        ans=abs(s-x[0]);
    }
    cout<<ans<<endl;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}