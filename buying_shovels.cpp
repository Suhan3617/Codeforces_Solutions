#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                v.push_back(i);
                if(n/i!=i){
                    v.push_back(n/i);
                }
            }
        }
        int ans=n;
        for(int i=0;i<v.size();i++){
            if(v[i]<=k){
                ans=min(ans,n/v[i]);
            }
        }
        cout<<ans<<'\n';
    }

}