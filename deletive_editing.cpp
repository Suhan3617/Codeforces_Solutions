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
#define yess cout<<"YES\n"
#define no cout<<"NO\n"

void solve(){
    string s , t;
    cin>>s;
    cin>>t;
    int n = s.size();
    int m=t.size();
    vi freq(26,0);
    fr(i,0,m){
        freq[t[i]-'A']++;
    }
    rfr(i,n-1,0){
        if(freq[s[i]-'A']>0){
            freq[s[i]-'A']--;
        }
        else{
            s[i]='.';
        }
    }
    string final_str="";
    fr(i,0,n){
        if(s[i]!='.'){
            final_str+=s[i];
        }
    }
    if(final_str==t){
        yess;
    }
    else{
        no;
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