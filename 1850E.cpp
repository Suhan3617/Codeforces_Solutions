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
   in(n);in(c);
   vi a(n);
   fr(i,0,n){
    cin>>a[i];
   }
   int l = 1 , r= sqrt(c);
   while(l<=r){
    int sum=0;
    int mid=(l+r)/2;
    fr(i,0,n){
        int temp=((2*mid)+a[i]);
        sum+=temp*temp;
        if(sum>c){
            break;
        }
    }
    if(sum==c){
        cout<<mid<<endl;
        return;
    }
    if(sum>c){
        r=mid-1;
    }
    else{
        l=mid+1;
    }
   }
}
int32_t main(){
    fastio;
    in(t);
    while(t--){
        solve();
    }
}