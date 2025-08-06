#include<bits/stdc++.h>
using namespace std;
bool solve(vector<int> &a , int k){
    int n=a.size();
    if(k==1 && !is_sorted(a.begin(),a.end())){
        // vector<int> copy=a;
        // sort(copy.begin(),copy.end());
        // for(int i=0;i<n;i++){
        //     if(copy[i]!=a[i]){
        //         return false;
        //     }
        // }
        return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k ;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(solve(v,k)){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
}