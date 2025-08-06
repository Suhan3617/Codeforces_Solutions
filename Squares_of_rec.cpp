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
    in(l1) ;
    in(b1) ;
    in(l2) ;
    in(b2) ;
    in(l3) ;
    in(b3) ;
    int sumb=b1+b2+b3;
    int suml=l1+l2+l3;
    int suml1=l1+l2 , suml2=l2+l3 , suml3=l3+l1 ;
    int sumb1=b1+b2 , sumb2=b2+b3 , sumb3=b3+b1 ;
    if(sumb==l1 && l1==l2 && l2==l3){
        yess;
        return;
    }
    else if(b1==b2 && b2==b3 && suml==b1){
        yess;
        return;
    }
    else if(l2+l3==l1 && b2==b3 && b1+b2==l1){
        yess;
        return;
    }
    else if (b2+b3==b1 && l2==l3 && l1+l2==b1){
        yess;
        return;
    }
    else{
        no;
        return;
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