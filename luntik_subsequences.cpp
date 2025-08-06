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

int generatesub(int ind , int currentsum, vector<int>& arr , int n , int target){
    int count=0;
    if(ind>=n){
        return currentsum==target ? 1 : 0;
    }
    int left=generatesub(ind+1,currentsum+arr[ind],arr,n,target);
    int right=generatesub(ind+1,currentsum,arr,n,target);
    return left+right;
}
int subseq_sum(vector<int>& a , int sum){
    int n=a.size();
    int target=sum-1;
    int ans=generatesub(0 , 0 , a , n , target);
    return ans;
}

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int s=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    cout<<subseq_sum(a , s)<<endl;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}