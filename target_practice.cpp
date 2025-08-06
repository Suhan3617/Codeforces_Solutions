#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n=10;
        int sum=0;
        char c;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>c;
                if(c=='X'){
                    int value=1+min({i,j,9-i,9-j});
                    sum+=value;
                }
            }
        }
        cout<<sum<<'\n';
    }
}