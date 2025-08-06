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
   in(w);in(h);
   in(a1);vi a(a1);
   int ans=0;
    fr(i,0,a1){
        cin>>a[i];
    }
    int max_a=a[a1-1]-a[0];
    
    in(b1);vi b(b1);
    fr(i,0,b1){
        cin>>b[i];
    }
    int max_b=b[b1-1]-b[0];

    in(c1);vi c(c1);
    fr(i,0,c1){
        cin>>c[i];
    }
    int max_c=c[c1-1]-c[0];

    in(d1);vi d(d1);
    fr(i,0,d1){
        cin>>d[i];
    }
    int max_d=d[d1-1]-d[0];

    int base_max=max(max_a,max_b);
    ans=max(ans,base_max*h);

    int base_max1=max(max_c,max_d);
    ans=max(ans,base_max1*w);

    cout<<ans<<endl;
    // fr(i,0,b1){
    //     if(b[i]>a[0] && b[i]<a[a1-1]){
    //         ans=max(ans,max_a*h);
    //     }
    //     else if(b[i]==a[0]){
    //         ans=max(ans,max_a*h);
    //     }
    //     else if(b[i]==a[a1-1]){
    //         ans=max(ans,max_a*h);
    //     }
    // }
    // fr(i,0,a1){
    //     if(a[i]>b[0] && a[i]<b[b1-1]){
    //         ans=max(ans,max_b*h);
    //     }
    //     else if(a[i]==b[0]){
    //         ans=max(ans,max_b*h);
    //     }
    //     else if(a[i]==b[b1-1]){
    //         ans=max(ans,max_b*h);
    //     }
    // }
    // fr(i,0,d1){
    //     if(d[i]>c[0] && d[i]<c[c1-1]){
    //         ans=max(ans,max_c*w);
    //     }
    //     else if(d[i]==c[0]){
    //         ans=max(ans,max_c*w);
    //     }
    //     else if(d[i]==c[c1-1]){
    //         ans=max(ans,max_c*w);
    //     }
    // }
    // fr(i,0,c1){
    //     if(c[i]>d[0] && c[i]<d[d1-1]){
    //         ans=max(ans,max_d*w);
    //     }
    //     else if(c[i]==d[0]){
    //         ans=max(ans,max_d*w);
    //     }
    //     else if(c[i]==d[d1-1]){
    //         ans=max(ans,max_d*w);
    //     }
    // }
    // cout<<ans<<endl;
}
int32_t main(){
    fastio;
    in(t);
    while(t--){
        solve();
    }
}