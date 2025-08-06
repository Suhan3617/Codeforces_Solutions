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
    in(n);
    vpii a(n);
    fr(i,0,n){
        cin>>a[i].fi;
        a[i].se=i+1;
    }
    int r=0 , l=0;
    sort(a.rbegin(),a.rend());
    vi ans(n+1);
    ans[0]=0;
    int v=0;
    fr(i,0,n){
        if(-1*l<r){
            ans[a[i].se]=--l;
        }
        else{
            ans[a[i].se]=++r;
        }
        v+=a[i].fi*abs(ans[a[i].se])*2;
    }
    cout<<v<<endl;
    for(int i=0 ; i<n+1;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}
int32_t main(){
    fastio;
    in(t);
    while(t--){
        solve();
    }
}