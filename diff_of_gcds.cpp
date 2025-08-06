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
   in(n);in(l);in(r);
   vi ans;
   fr(i,1,n+1){
    int temp = ((l+i-1)/i)*i;
    ans.pb(temp);
    if(temp>r){
        no;
        return;
    }
   }
   yess;
   for(auto it:ans){
    cout<<it<<" ";
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