#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int sx , sy , dx , dy ;
        cin>>sx>>sy>>dx>>dy;
        
        if(dy<sy){
            cout<<"-1"<<'\n';
            continue;
        }
        int moves = dy - sy ;

        sx+=moves;
        if(dx>sx){
            cout<<"-1"<<'\n';
            continue;
        }

        moves+=sx-dx;
        cout<<moves<<'\n';
    }
}