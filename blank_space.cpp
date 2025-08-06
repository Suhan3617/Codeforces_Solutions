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
        int count=INT_MIN;
        int c=0;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                c++;
            }
            else if(v[i]==1){
                count=max(count,c);
                c=0;
            }
        }
        count=max(count,c);
        cout<<count<<'\n';
    }
}
