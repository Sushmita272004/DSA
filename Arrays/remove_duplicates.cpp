#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    int idx = 1;
    for(int i=1; i<n; i++) if(arr[i] != arr[i-1]) arr[idx++] = arr[i];
    for(int i=0; i<idx; i++) cout << arr[i] << " ";
}
