#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000000;

int main() {
    int n;
    cin >> n;

    bool isprime[MAX + 1];
    fill(isprime, isprime + MAX + 1, true);

    isprime[0] = isprime[1] = false;
    for (int i = 2; i * i <= MAX; i++) {
        if (isprime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                isprime[j] = false;
            }
        }
    }
    if(n==1 || n==2){
        cout<<"1"<<endl;
    }
    else{
        cout<<"2"<<endl;
    }
    for (int i = 1; i <= n; i++) {
        if (isprime[i+1]) {
            cout << "1 ";
        } else {
            cout << "2 ";
        }
    }

    cout << endl;
    return 0;
}
