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
   int even_divisor=a[0];
   int odd_divisor=a[1];
   fr(i,0,n){
    if(i%2==0){
        even_divisor=gcd(even_divisor,a[i]);
    }
    else{
        odd_divisor=gcd(odd_divisor,a[i]);
    }
   }
//    cout<<even_divisor<<" "<<odd_divisor<<endl;
   if(odd_divisor==even_divisor){
    cout<<"0\n";
    return;
   }
   bool even=true;
   fr(i,0,n){
    if(i%2==1){
        if(a[i]%even_divisor==0){
            even = false;
            break;
        }
    }
   }
   if(even){
    cout<<even_divisor<<endl;
    return;
   }

   bool odd=true;
   fr(i,0,n){
    if(i%2==0){
        if(a[i]%odd_divisor==0){
            odd=false;
            break;
        }
    }
   }
   if(odd){
    cout<<odd_divisor<<endl;
    return;
   }

   cout<<"0\n";
}
int32_t main(){
    fastio;
    in(t);
    while(t--){
        solve();
    }
}