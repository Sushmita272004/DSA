#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    int n;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (isPowerOfTwo(A[i])) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}