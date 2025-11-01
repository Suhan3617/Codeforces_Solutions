#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


void solve() {
    int N, A, B;
    if (!(cin >> N >> A >> B)) return;
    string S;
    cin >> S;
    vector<int> P_a(N + 1, 0);
    vector<int> P_b(N + 1, 0);

    for (int i = 0; i < N; ++i) {
        P_a[i + 1] = P_a[i] + (S[i] == 'a' ? 1 : 0);
        P_b[i + 1] = P_b[i] + (S[i] == 'b' ? 1 : 0);
    }
    long long total_count = 0;
    int ptr_b = 0; 
    int ptr_a = 0; 
    for (int r = 1; r <= N; ++r) {
        while (ptr_b < r && P_b[ptr_b] <= P_b[r] - B) {
            ptr_b++;
        }
        while (ptr_a < r && P_a[ptr_a] <= P_a[r] - A) {
            ptr_a++;
        }
        int k_max = ptr_a - 1;
        int k_min = ptr_b;

        if (k_min <= k_max) {
            total_count += (k_max - k_min + 1);
        }
    }
    cout << total_count << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}