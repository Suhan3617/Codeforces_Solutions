#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    int count=0;
    while(n--){
        string str;
        cin>>str;
        if(str=="++X"|| str=="X++"){
            count+=1;
        }
        else if(str=="--X"|| str=="X--"){
            count-=1;
        }
    }
    cout<<count;
}