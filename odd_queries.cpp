#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define fi first 
#define se second 
#define pb push_back
#define mp make_pair
typedef long double ld;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);


void solve(){
    int n , q;
    cin>>n>>q;
    vector<int> a(n);
    int sum=0;
    for(auto& i:a){
        cin>>i;
        sum+=i;
    }
    vector<int> prefix(n);
    prefix[0]=a[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+a[i];
    }
    int sum1=sum;
    while(q--){
        sum=sum1;
        int l , r , k ;
        cin>>l>>r>>k;
        int c=0;
        if(l==1){
            c=prefix[r-1];
        }
        else{
            c=prefix[r-1]-prefix[l-2];
        }
        int d=k*(r-l+1);
        sum=sum-c+d;
        if(sum%2==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
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