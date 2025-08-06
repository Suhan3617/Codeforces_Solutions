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
    vi a(n) , b(n) ;
    fr(i,0,n){
        cin>>a[i];
    }
    fr(i,0,n){
        cin>>b[i];
    }
    vi long_a(2*n+1,0);
    vi long_b(2*n+1,0);
    
    int count=1;
    fr(i,1,n){
        if(a[i]==a[i-1]){
            count++;
        }
        else{
            long_a[a[i-1]]=max(long_a[a[i-1]],count);
            count=1;
        }
    }
    long_a[a[n-1]]=max(long_a[a[n-1]],count);
    int counter=1;
    fr(i,1,n){
        if(b[i]==b[i-1]){
            counter++;
        }
        else{
            long_b[b[i-1]]=max(long_b[b[i-1]],counter);
            counter=1;
        }
    }
    long_b[b[n-1]]=max(long_b[b[n-1]],counter);

    int max_freq=-1;
    for(int i=1 ; i<=2*n ; i++){
        max_freq=max(max_freq,long_a[i]+long_b[i]);
    }
    cout<<max_freq<<endl;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}