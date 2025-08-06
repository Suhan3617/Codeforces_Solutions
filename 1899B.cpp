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
#define gcd(a,b) __gcd(a,b)
#define yess cout<<"YES\n";
#define no cout<<"NO\n"



void solve(){
    in(n);
    vi a(n);
    fr(i,0,n){
        cin>>a[i];
    }
    // sort(all(a));
    vi prefix(n);
    // vi suffix(n);
    prefix[0]=a[0];
    fr(i,1,n){
        prefix[i]=prefix[i-1]+a[i];
    }
    // rfr(i,n-2,0){
    //     suffix[i]=suffix[i+1]+a[i];
    // }

    int ans=0;
    // fr(i,0,m){
    //     int c = k[i];
    //     int diff=abs(prefix[c]-suffix[n-c-1]);
    //     ans=max(ans,diff);
    // }
    for(int k=1;k<=n;k++){
        if(n%k){
            continue;
        }
        int start = k-1;
        int res = 0 ;
        int mini=prefix[start];
        int maxi=prefix[start];
        for(int idx=start+k;idx<n;idx+=k){
            int curr = prefix[idx]-prefix[idx-k];
            maxi=max(maxi,curr);
            mini=min(mini,curr);
        }
        ans=max(ans,(maxi-mini));
    }
    cout<<ans<<endl;
}
int32_t main(){
    fastio;
    in(t);
    while(t--){
        solve();
    }
}