#include <iostream>
#include<vector>

using namespace std;
int main() {
    int n; cin >> n;
    vector<int> arr(n);
    int idx = 0;
    for(int i=0; i<n; i++) cin >> arr[i];
    for(int i=0; i<n; i++) if(arr[i] != 0) arr[idx++] = arr[i];
    while(idx < n) arr[idx++] = 0;
    for(int i=0; i<n; i++) cout << arr[i] << " ";
}
