/*Given a natural no. N and two integers A and B determine if it's possible to
 partition the set 1,2,3,...,N into two non-empty subsets such that the sum of
 elements are in the ratio A:B.


#include<iostream>
using namespace std;
#include <set>

bool canPartition(int N, int A, int B) {
    int64_t S = (int64_t)N * (N + 1) / 2;
    int64_t total = A + B;

    if ((S * A) % total != 0)
        return false;

    int64_t target = (S * A) / total;

    set<int64_t> possibleSums;
    possibleSums.insert(0);

    for (int num = 1; num <= N; ++num) {
        set<int64_t> newSums = possibleSums;
        for (int64_t sum : possibleSums) {
            newSums.insert(sum + num);
        }
        possibleSums = newSums;
    }
    return possibleSums.count(target) > 0;
}


 int main(){
    int N, A,B;
    cout<<"write the value of A, B and N (where A and B are integers and N is the natural no.): ";
    cin>> A >> B >> N;
    if (canPartition(N, A, B)) 
        cout << "YES, it is possible to partition." << endl;
    else 
        cout << "NO, it is not possible to partition." << endl;
    return 0;
}
 */
#include <iostream>
#include <vector>
using namespace std;

bool canPartition(int N, int A, int B) {
    int64_t S = (int64_t)N * (N + 1) / 2;
    int64_t total = A + B;

    // Check if the desired partition is possible
    if ((S ) % total != 0)
        return false;

    int64_t target = (S * A) / total;

    // DP to check if subset sum = target is possible
    vector<bool> dp(target + 1, false);
    dp[0] = true;

    for (int num = 1; num <= N; ++num) {
        for (int64_t i = target; i >= num; --i) {
            dp[i] = dp[i] || dp[i - num];
        }                                                               
    }

    return dp[target];
}

int main() {
    int N, A, B;
    cout << "Enter N, A, B: ";
    cin >> N >> A >> B;

    if (canPartition(N, A, B)) {
        cout << "YES, it is possible to partition." << endl;
    } else {
        cout << "NO, it is not possible to partition." << endl;
    }

    return 0;
}
