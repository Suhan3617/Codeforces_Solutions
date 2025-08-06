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
   int n;
   cin>>n;
   vi a(n);
   fr(i,0,n){
    cin>>a[i];
   }

   vi suffix(n);
   map<int,int> index;
   int sum=0;

   rfr(i,n-1,0){
    sum+=a[i];
    index[sum]=i;
    suffix[i]=sum;
   }

   int ans=0;
   int prefix_sum=0;
   fr(i,0,n){
    index.erase(suffix[i]);
    prefix_sum+=a[i];
    if(index.find(prefix_sum)!=index.end()){
        ans=max(ans,(i+1)+(n-index[prefix_sum]));
    }
   }
   cout<<ans<<endl;

//    int alice_sum=0;
//    int bob_sum=0;
//    int final_ans=0;
//    int ans1=0,ans2=0;
//    fr(i,0,n/2){//alice first wlaa 
//     alice_sum+=a[i];
//     ans1++;
//     if(alice_sum==bob_sum){
//         final_ans=max(final_ans,ans1);
//     }
//     bob_sum+=a[n-1-i];
//     ans1++;
//     if(alice_sum==bob_sum){
//         final_ans=max(final_ans,ans1);
//     }
//    }
//    bob_sum=0;
//    alice_sum=0;
// //    cout<<final_ans<<endl;
//    fr(i,0,n/2){//bob first wlaa 
//     bob_sum+=a[n-1-i];
//     ans2++;
//     if(alice_sum==bob_sum){
//         final_ans=max(final_ans,ans2);
//     }
//     alice_sum+=a[i];
//     ans2++;
//     if(alice_sum==bob_sum){
//         final_ans=max(final_ans,ans2);
//     }
//    }
//    cout<<final_ans<<endl;
}
int32_t main(){
    fastio;
    in(t);
    while(t--){
        solve();
    }
}