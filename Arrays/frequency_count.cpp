#include <iostream>
#include <unordered_map>
#include<vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    unordered_map<int,int> freq;
    for(int i=0; i<n; i++) { cin >> arr[i]; freq[arr[i]]++; }
    for(auto &p : freq) cout << p.first << " : " << p.second << "\n";
}
