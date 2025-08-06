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
   in(n) ;
   char c ;cin>>c;

   string s ;
   cin>>s;
   s+=s;
   int ind=-1;
   int ans=INT_MIN;
   rfr(i,2*n-1,0){
    if(s[i]=='g'){
        ind=i;
    }
    else if(s[i]==c){
        ans=max(ans,ind-i);
    }
   }
   if(ans==INT_MIN){
    ans=0;
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