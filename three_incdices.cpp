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

bool find_triple(const vector<int>& a  , int n){
    for(int j=1;j<n-1;j++){
        int left=-1,right=-1;
        for(int i=0;i<j;i++){
            if(a[i]<a[j]){
                left=i;
                break;
            }
        }
        for(int k=j+1;k<n;k++){
            if(a[j]>a[k]){
                right=k;
                break;
            }
        }
        if(left!=-1 && right!=-1){
            cout<<"YES"<<endl;
            cout<<left+1<<" "<<j+1<<" "<<right+1<<endl;
            return true;
        }
    }
    return false;
}
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto & i : a){
        cin>>i;
    }
    if(!find_triple(a,n)){
        cout<<"NO"<<endl;
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