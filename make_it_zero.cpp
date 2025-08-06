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
    in(n);
    vi a(n);
    bool all0=true;
    fr(i,0,n){
        cin>>a[i];
        if(a[i]!=0){
            all0 = false;
        }
    }
    if(all0){
        cout<<"0"<<endl;
    }
    else if(n%2==0){
        cout<<"2"<<endl;
        cout<<"1 "<<n<<endl;
        cout<<"1 "<<n<<endl;
    }
    else{
        cout<<"4"<<endl;
        cout<<n-1<<" "<<n<<endl;
        cout<<n-1<<" "<<n<<endl;
        cout<<"1 "<<n-1<<endl;
        cout<<"1 "<<n-1<<endl;
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