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
    
}
int32_t main(){
    fastio;
    int n , m ;
    cin>>n>>m;
    int a[n] , b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    vector<int> v;
    int i=0,j=0;
    while(i<n && j<m){
        if(a[i]<=b[j]){
            v.pb(a[i]);
            i++;
        }
        else{
            v.pb(b[j]);
            j++;
        }
    }
    while(i<n){
        v.pb(a[i]);
        i++;
    }
    while(j<m){
        v.pb(b[j]);
        j++;
    }
    for(auto a:v){
        cout<<a<<" ";
    }
}