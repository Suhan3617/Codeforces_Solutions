#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

vector<int> compute_lps(const string& pattern) {
    int m = pattern.length();
    vector<int> lps(m, 0);
    int length = 0;
    int i = 1;
    while (i < m) {
        if (pattern[i] == pattern[length]) {
            length++;
            lps[i] = length;
            i++;
        } else {
            if (length != 0) {
                length = lps[length - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

int kmp_search(const string& text, const string& pattern) {
    int n = text.length();
    int m = pattern.length();
    if (m == 0) return 0;
    if (n == 0) return -1;
    vector<int> lps = compute_lps(pattern);
    int i = 0;
    int j = 0;
    while (i < n) {
        if (pattern[j] == text[i]) {
            i++;
            j++;
        }
        if (j == m) {
            return i - j;
        } else if (i < n && pattern[j] != text[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
    return -1;
}

void solve() {
    string A, B;
    cin >> A >> B;
    int N = A.length();

    if (A == B) {
        cout << 0 << endl;
        return;
    }

    int count_A = count(A.begin(), A.end(), '1');
    int count_B = count(B.begin(), B.end(), '1');

    if (count_A != count_B) {
        cout << -1 << endl;
        return;
    }
    string A_doubled = A + A;
    int result = kmp_search(A_doubled, B);
    if (result != -1 && result < N) {
        cout << result << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}