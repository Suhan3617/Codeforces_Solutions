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
#define rfr(i,x,y) for(int i=x ;i>=y ;i--)
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define lcm(a,b) (a/__gcd(a,b))
#define yess cout<<"YES\n";
#define no cout<<"NO\n"

void solve(){
    in(n) ; in(x) ;
    vi a(n);
    fr(i,0,n){
        cin>>a[i];
    }
    vpii range(n);
    fr(i,0,n){
        range[i] = make_pair(a[i] - x, a[i] + x);
    }
    int v=0;
    int l=range[0].fi;
    int r=range[0].se;
    fr(i,1,n){
        l=max(l,range[i].fi);
        r=min(r,range[i].se);

        if(l>r){
            v++;
            l=range[i].fi;
            r=range[i].se;
        }
    }
    cout<<v<<endl;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}