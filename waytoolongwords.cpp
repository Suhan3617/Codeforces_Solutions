#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    while(n--){
        string s1;
        getline(cin,s1);
        int size=s1.size();
        if(size>10){
            cout<<s1[0]<<size-2<<s1[size-1]<<'\n';
        }
        else{
            cout<<s1<<'\n';
        }
    }
}