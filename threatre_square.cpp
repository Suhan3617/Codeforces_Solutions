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
    in(n) ; in(m) ; in(a) ;
    int x=n/a , y=m/a;
    // cout<<x<<" "<<y<<endl;
    int c1=n%a;
    int c2=m%a;
    // cout<<c1<<" "<<c2<<endl;
    if(c1==0 && c2==0){
        // cout<<"a"<<endl;
        cout<<x*y<<endl;
        
    }
    else if(c1!=0 && c2==0){
        // cout<<"b"<<endl;
        cout<<(x+1)*y<<endl;
    }
    else if(c1==0 && c2!=0){
        // cout<<"c"<<endl;
        cout<<x*(y+1)<<endl;
    }
    else if(c1!=0 && c2!=0){
        // cout<<"d"<<endl;
        cout<<(x+1)*(y+1)<<endl;
    }
    
}
int32_t main(){
    fastio;
    int t=1;
    while(t--){
        solve();
    }
}