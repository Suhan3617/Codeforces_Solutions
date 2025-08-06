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

int bin_expo(int x , int n ){
    if(n==0){
        return 1;
    }
    if(n%2==0){
        return bin_expo(x*x,n/2);
    }
    return x*bin_expo(x*x,(n-1)/2);
}

void solve(){
   in(n);
   vi a(n);
   vi b(n);
   fr(i,0,n){
    cin>>b[i];
   }
   fr(i,0,n){
    a.pb(bin_expo(b[i],2));
   }
   
}
int32_t main(){
    fastio;
    in(t);
    while(t--){
        solve();
    }
}