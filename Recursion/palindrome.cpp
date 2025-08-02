#include<iostream>
#include <vector>
using namespace std;

bool f(int l, vector<int>& arr, int r){
    if ( l>=r) return true;
    if (arr[l]!= arr[r]) return false;

    // check for the next pair
    return(l+1,arr,r-1);
}

int main(){
    int n;
    cout<<"enter the size of array: ";
    cin >> n;
    cout<<"enter the elements of array: ";

    vector<int> arr(n);
    for (int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    bool ans= f(0, arr, n-1);

    if (ans){
        cout<< " is a palindrome" << endl;
    }
    else{
        cout<< " is not a palindrome" << endl;
    }
}


