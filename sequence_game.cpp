#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        // int mx=v[0];
        // if(is_sorted(v.begin(),v.end())){
        //     cout<<'\n'<<n<<'\n';
        //     for(auto num:v){
        //         cout<<num<<" ";
        //     }
        // }
        // else{
        //     for(int i=1;i<n;i++){
        //         if(v[i]>=mx){
        //             mx=v[i];
        //         }
        //         else{
        //             int x=v[i];
        //             v.insert(v.begin()+i , x);
        //         }
        //     }
        //     cout<<'\n'<<v.size()<<'\n';
        //     for(auto num:v){
        //         cout<<num<<" ";
        //     }
            
        // }
        vector<int> ans;
        ans.push_back(v[0]);
        for(int i=1 ; i<n ; i++){
            if(v[i]<v[i-1]){
                ans.push_back(v[i]);
            }
            ans.push_back(v[i]);
        }
        cout<<ans.size()<<'\n';
        for(auto num:ans){
            cout<<num<<" ";
        }
        cout<<'\n';
    }
}