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
#define no cout<<"No\n"

int summ(int n , int k){
    int c=n-k+1;
    if(c<=0){
        return 0;
    }
    return c*(c+1)/2;
}
void solve(){
    in(n) ; in(k) ; in(q) ;
    vi a(n);
    int cnt=0;
    fr(i,0,n){
        cin>>a[i];
    }
    vi ans;
    fr(i,0,n){
        if(a[i]<=q){
            cnt++;
        }
        else{
            if(cnt>=k){
                ans.pb(cnt);
            }
            cnt=0;
        }
    }
    if(cnt!=0){
        if(cnt>=k){
            ans.pb(cnt);
        }
    }
    int len=ans.size();
    int sum=0;
    for(auto len:ans){
        sum+=summ(len,k);
    }
    cout<<sum<<endl;
    return;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}